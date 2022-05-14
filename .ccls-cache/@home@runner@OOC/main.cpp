#include <iostream>

class Customer {
private:
    char NIC[12];
    char name[20];
    char address[40];
    char enail[20];
    int contactNo;
public:
    void updateProfile(const char cName[], const char cAddress[], const char cEmail[], int contact);
};

class Item {
private:
    int itemID;
    char itemdecription[40];
    double price;
public:
    Item();
    void setDetails(int id, const char itemDesc[]);
    void setPrice(double oPrice);
    double calcTotal(int qty);
    ~Item();
};

class Order {
private:
    int orderID;
    Item* items;
    int count;
    int maxsize;
    int orderDate;
    int orderDeliveryDate;

public:
    Order(int oId, int size);
    void addItem(int id, const char name[], double oPrice, int oDate, int oDelivaryDate);
    double calcTotPrice();
    ~Order();

};


int main()
{

}


Item::Item()
{
    itemID = 0;
}

void Item::setDetails(int id, const char itemDesc[])
{
    itemID = id;
    strcpy_s(itemdecription, itemDesc);
}

void Item::setPrice(double oPrice)
{
    price = oPrice;
}

double Item::calcTotal(int qty)
{
    return price * qty;
}


Item::~Item()
{
}


Order::Order(int oId, int size)
{
    orderID = oId;
    maxsize = size;
    count = 0;
}

void Order::addItem(int id, const char name[], double oPrice, int oDate, int oDelivaryDate)
{
}

double Order::calcTotPrice()
{
    double total = 0;


    return total;
}

Order::~Order()
{
}

void Customer::updateProfile(const char cName[], const char cAddress[], const char cEmail[], int contact)
{
    strcpy_s(name, cName);
    strcpy_s(address, cAddress);
    strcpy_s(enail, cEmail);
    contactNo = contact;
}