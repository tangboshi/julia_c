#ifndef AUTOMATON_HH
#define AUTOMATON_HH

#include<QObject>
#include<QMap>
#include <QString>
typedef QMap<unsigned int, unsigned int> map;
typedef QMap<unsigned int, unsigned int>::iterator map_it;


#include <QtMultimedia/QMediaPlayer>
#include <QFile>

class window;

#define STATE_READY             0
#define STATE_ACCEPTING_MONEY   1
#define STATE_BUSY              2

#define ALL_BUTTONS                 -1
#define BUTTON_INSERT_COIN          0
#define BUTTON_PRODUCT_COKE         1
#define BUTTON_PRODUCT_COKE_LIGHT   2
#define BUTTON_PRODUCT_SPRITE       3
#define BUTTON_PRODUCT_WATER        4
#define BUTTON_PRODUCT_JUICE        5
#define BUTTON_REFUND               6

class automaton : public QObject
{
    Q_OBJECT

    public:
    static automaton* getVendor();
    void vendorSlot(const unsigned int buttonPressed);
    map* parseFile(QFile* file);

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
    void resetVendor();

    // Attributes
    static automaton* vendor;
    unsigned int state;
    unsigned int numberCustomerCoins;
    unsigned int productRequiredCoins;
    //first int identifies product, second is prices in number of coins
    map* prices;
    QMediaPlayer* player;
};

#endif // AUTOMATON_HH
