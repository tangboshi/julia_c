#include "automaton.hh"
#include "window.h"
#include "utility.h"
#include <QDebug>

#define TO_BE_REPLACED 3

automaton* automaton::vendor = nullptr;

automaton::automaton() :
    state(STATE_READY),
    numberCustomerCoins(0),
    prices(parseFile(new QFile)),
    player(new QMediaPlayer())
{
    player->setVolume(100);
}

map* automaton::parseFile(QFile *file)
{
    map* newMap = new map;
    map_it it = newMap->begin();
    newMap->insert(it,   BUTTON_PRODUCT_COKE,        3);
    newMap->insert(it,   BUTTON_PRODUCT_COKE_LIGHT,  3);
    newMap->insert(it,   BUTTON_PRODUCT_SPRITE,      3);
    newMap->insert(it,   BUTTON_PRODUCT_WATER,       1);
    newMap->insert(it,   BUTTON_PRODUCT_JUICE,       2);
    return newMap;
}

automaton* automaton::getVendor()
{
    if( vendor == nullptr )
        vendor = new automaton;
    return vendor;
}

void automaton::resetVendor()
{
    numberCustomerCoins = 0;
    productRequiredCoins = 0;
    emit vendorState(STATE_BUSY);
    delay(2500);
    state = STATE_READY;
    emit vendorDisplayStatus("Bereit!");
    emit vendorDisplayDetails("");
}

void automaton::vendorSlot(const unsigned int buttonPressed)
{
    switch (buttonPressed)
    {
        case BUTTON_INSERT_COIN:
        {
            switch (state)
            {
                case STATE_ACCEPTING_MONEY:
                {
                    numberCustomerCoins++;
                    vendor->player->setMedia(QUrl("qrc:/snd/insert-coin.wav"));
                    vendor->player->play();
                    if (numberCustomerCoins == productRequiredCoins)
                    {
                        vendor->player->setMedia(QUrl("qrc:/snd/drop-bottle.mp3"));
                        vendor->player->play();
                        emit revenue(productRequiredCoins);
                        resetVendor();
                        emit vendorDisplayStatus("Vielen Dank!");
                        emit vendorDisplayDetails("Bis zum nächsten Mal.");
                        resetVendor();
                    }
                    break;
                }
                default:
                    emit vendorDisplayStatus("Wählen Sie ein Produkt!");
                    emit vendorDisplayDetails("Geldschlitz gesperrt!");
                    resetVendor();
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
                        state = STATE_ACCEPTING_MONEY;
                        productRequiredCoins = 2;
                        emit vendorDisplayStatus("Produkt "+QString::number(buttonPressed)+" ausgewählt");
                        emit vendorDisplayDetails("Preis: "+QString::number(productRequiredCoins)+" Münzen.");
                    }
                    break;
                case STATE_ACCEPTING_MONEY:
                    {
                        emit vendorDisplayStatus("Bereits Produkt ausgewählt!");
                        emit vendorDisplayDetails("Zurücksetzen: Roter Knopf.");
                        delay(1000);
                        emit vendorDisplayDetails("Preis: "+QString::number(productRequiredCoins)+" Münzen.");
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
                resetVendor();
                break;
            }
        default:
            break;
    }
}

void automaton::vendorStateSlot(unsigned int newState)
{
    switch(newState)
    {
        case STATE_BUSY:
            // deactivate all buttons
            emit deactivateButton(ALL_BUTTONS);
            break;
        default:
            break;
    }
}
