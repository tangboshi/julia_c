#ifndef AUTOMATON_HH
#define AUTOMATON_HH

#include <QObject>
#include <QString>
#include <QtMultimedia/QMediaPlayer>
#include <QFile>

#include "product.hh"
class window;

#define STATE_READY             0
#define STATE_ACCEPTING_MONEY   1
#define STATE_BUSY              2

#define ALL_BUTTONS                 -1
#define BUTTON_INSERT_COIN          -2
#define BUTTON_REFUND               -3
#define BUTTON_PRODUCT_COKE         0
#define BUTTON_PRODUCT_COKE_LIGHT   1
#define BUTTON_PRODUCT_SPRITE       2
#define BUTTON_PRODUCT_WATER        3
#define BUTTON_PRODUCT_JUICE        4


class automaton : public QObject
{
    Q_OBJECT

    public:
    static automaton* getVendor();
    void vendorSlot(const unsigned int buttonPressed);
    bool parseDataFiles();

    signals:
    void vendorDisplayStatus(QString status);
    void vendorDisplayDetails(QString details);
    void revenue(unsigned int amount);
    void vendorState(unsigned int newState);
    void deactivateButton(int button);
    void activateButton(int button);

    private slots:
    void vendorStateSlot(unsigned int newState);

    private:
    // Methods:
    // Constructor -> Singleton-Pattern
    automaton();

    // Attributes
    static automaton* vendor;
    unsigned int state;
    unsigned int numberCustomerCoins;
    unsigned int productRequiredCoins;
    unsigned int productDesired;
    QVector<product*> products;
    QMediaPlayer* player;
    QFile* fileRevenue;
    QFile* fileContent;
};

#endif // AUTOMATON_HH
