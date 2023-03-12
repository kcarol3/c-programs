#ifndef SHOP_H
#define SHOP_H
#include <iostream>
#include <vector>
#include "warehouse.h"
using namespace std;

class Shop
{
    string shopName;
    vector<Warehouse> warehouses;
public:
    Shop();
    Shop(string newShopName);
    void addWarehouse(Warehouse newWarehouse);
    void sellGood(string goodName, int count);
    void showWarehouses();
    void showShopName();
    ~Shop(){
        cout<<"Destruktor magazynu"<<endl;
    }
};

#endif // SHOP_H
