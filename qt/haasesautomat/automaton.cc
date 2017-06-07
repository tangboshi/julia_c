#include "automaton.hh"
#include "window.h"
#include "utility.h"
#include <QDebug>

#define TO_BE_REPLACED 3

automaton* automaton::vendor = nullptr;

automaton::automaton() :
    state(STATE_READY),
    numberCustomerCoins(0),
    products(*(new QVector<product*>))
{
    parseDataFiles();
    connect(this, &automaton::vendorState, this, &automaton::vendorStateSlot);
}

bool automaton::parseDataFiles()
{

    QFile file("/home/alex/0_data/2017_Julia/git/qt/haasesautomat/data/content.dat");
    if(!file.open(QIODevice::ReadWrite))
    {
        qDebug() << file.QFileDevice::errorString();
    }

    QTextStream stream(&file);
    QString content = stream.readAll();

    QStringList list = content.split(QRegExp("\\s+"), QString::SkipEmptyParts);
    //qDebug() << list;

    unsigned int j = 0;
    QVector<QString> productNames, productImages;
    QVector<unsigned int> productPrices, productStock;
    for (QStringList::iterator it = list.begin(); it != list.end(); ++it)
    {
        if(list.size() % 4 != 0)
        {
            qDebug() << "content.dat corrupted. size:" << list.size();
            return false;
        }

        QString current = *it;
        qDebug() << current;

        switch (j % 4)
        {
            case 0:
                productNames.push_back(current);
                break;
            case 1:
                productImages.push_back(current);
                break;
            case 2:
                productPrices.push_back(current.toUInt());
                break;
            case 3:
                productStock.push_back(current.toUInt());
                break;
            default:
                break;
        }
        j++;
    }

    QVector<QString>::Iterator it_names = productNames.begin();
    QVector<QString>::Iterator it_images = productImages.begin();
    QVector<unsigned int>::Iterator it_prices = productPrices.begin();
    QVector<unsigned int>::Iterator it_stock = productStock.begin();

    for(int i=0; i < productNames.size(); i++)
    {
        products.push_back(new product);
        products[i]->setName(*it_names);
        products[i]->setImage(*it_images);
        products[i]->setPrice((*it_prices));
        products[i]->setStock((*it_stock));

        it_names++;
        it_images++;
        it_prices++;
        it_stock++;

        qDebug() << "i: " << i << " name: " << products[i]->getName();
        qDebug() << "i: " << i << " image: " << products[i]->getImage();
        qDebug() << "i: " << i << " price: " << products[i]->getPrice();
        qDebug() << "i: " << i << " stock: " << products[i]->getStock();
    }

    //qDebug() << "Test: " << (*products.begin())->getImage();

    return true;
}

automaton* automaton::getVendor()
{
    if( vendor == nullptr )
        vendor = new automaton;
    return vendor;
}

void automaton::vendorSlot(const unsigned int buttonPressed)
{
    player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/snd/button-pressed.mp3"));
    player->play();
    delay(800);

    switch (buttonPressed)
    {
        case BUTTON_INSERT_COIN:
        {
            switch (state)
            {
                case STATE_ACCEPTING_MONEY:
                {
                    numberCustomerCoins++;
                    emit vendorDisplayDetails("Es fehlen noch: "+QString::number(productRequiredCoins - numberCustomerCoins)+" Münzen.");
                    vendor->player->setMedia(QUrl("qrc:/snd/insert-coin.wav"));
                    vendor->player->play();
                    delay(2000);
                    if (numberCustomerCoins >= productRequiredCoins)
                    {
                        unsigned int remainingStock = products[productDesired]->getStock();
                        products[productDesired]->setStock(--remainingStock);

                        vendor->player->setMedia(QUrl("qrc:/snd/drop-bottle.mp3"));
                        vendor->player->play();

                        emit revenue(productRequiredCoins);
                        emit vendorDisplayStatus("Vielen Dank!");
                        emit vendorDisplayDetails("Bis zum nächsten Mal.");
                        emit vendorState(STATE_READY);
                    }
                    break;
                }
                default:
                    emit vendorDisplayStatus("Wählen Sie zuerst ein Produkt!");
                    emit vendorDisplayDetails("");
                    emit vendorState(STATE_READY);
                    break;
            }
            break;
        }
        case BUTTON_PRODUCT_COKE:
        case BUTTON_PRODUCT_COKE_LIGHT:
        case BUTTON_PRODUCT_SPRITE:
        case BUTTON_PRODUCT_WATER:
        case BUTTON_PRODUCT_JUICE:
        {
            switch (state)
            {
                case STATE_READY:
                    {
                        productDesired = buttonPressed;
                        unsigned int remainingStock = products[productDesired]->getStock();

                        if(remainingStock <= 0)
                        {
                            emit vendorDisplayStatus("Produkt leider ausverkauft!");
                            emit vendorState(STATE_READY);
                            return;
                        }

                        productRequiredCoins = products[buttonPressed]->getPrice();
                        emit vendorDisplayStatus(products[productDesired]->getName()+" ausgewählt");
                        emit vendorDisplayDetails("Preis: "+QString::number(productRequiredCoins)+" Münzen.");
                        emit vendorState(STATE_ACCEPTING_MONEY);
                    }
                    break;
                case STATE_ACCEPTING_MONEY:
                    {
                        emit vendorDisplayStatus("Bereits "+products[productDesired]->getName()+" ausgewählt!");
                        emit vendorDisplayDetails("Zurücksetzen: Roter Knopf.");
                        delay(1000);
                        emit vendorDisplayDetails("Es fehlen: "+QString::number(productRequiredCoins - numberCustomerCoins)+" Münzen.");
                    }
                    break;
                default:
                    break;
            }
        }
            break;
        case BUTTON_REFUND:
            {
                emit vendorDisplayStatus("Reset!");
                emit vendorDisplayDetails(QString::number(numberCustomerCoins)+" Münzen zurückgegeben.");
                if(numberCustomerCoins > 0)
                {
                    vendor->player->setMedia(QUrl("qrc:/snd/coin-refund.mp3"));
                    vendor->player->play();
                }
                emit vendorState(STATE_READY);
                break;
            }
        default:
            break;
    }
}

void automaton::vendorStateSlot(unsigned int newState)
{
    state = newState;
    switch(newState)
    {
        case STATE_BUSY:
            emit deactivateButton(ALL_BUTTONS);
            break;
        case STATE_READY:
            emit vendorState(STATE_BUSY);
            numberCustomerCoins = 0;
            productRequiredCoins = 999;
            delay(2800);
            // avoid recursion
            state = STATE_READY;
            emit vendorDisplayStatus("Bereit!");
            emit vendorDisplayDetails("");
            emit activateButton(ALL_BUTTONS);
            break;
        default:
            break;
    }
}
