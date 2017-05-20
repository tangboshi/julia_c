#ifndef PRODUCT_HH
#define PRODUCT_HH

#include <QString>

class product
{
    public:
    product();

    QString getName(){return name;}
    QString getImage(){return image;}
    unsigned int getPrice(){return price;}
    unsigned int getStock(){return stock;}

    void setName(QString string){name = string;}
    void setImage(QString string){image= string;}
    void setPrice(unsigned int amount){price = amount;}
    void setStock(unsigned int amount){stock = amount;}

    private:
    QString name;
    QString image;
    unsigned int price;
    unsigned int stock;
};

#endif // PRODUCT_HH
