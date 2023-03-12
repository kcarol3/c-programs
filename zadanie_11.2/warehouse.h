#ifndef WAREHOUSE_H
#define WAREHOUSE_H
#include <vector>
#include <iostream>
#include <memory>
using namespace std;

class Item{
    string itemName;
    int countOfItem;
public:
    Item(string newItemName, int newCountOfItem){
        this->itemName=newItemName;
        this->countOfItem=newCountOfItem;
    }
    void setCountOfItem(int newValue){
        this->countOfItem=newValue;
    }
    int getCountOfItem(){
        return this->countOfItem;
    }
    string getItemName(){
        return this->itemName;
    }
};

class Warehouse
{
    vector<shared_ptr<Item>> items;
    string warehouseName;
public:
    Warehouse(string name);
    void showAllGoods();
    ~Warehouse(){
        cout << "Destruktor magazynu"<<endl;
    };
    const string &getWarehouseName() const;
    vector<shared_ptr<Item>> getItems(){
        return this->items;
    }
    void addItem(string name, int count);
};

#endif // WAREHOUSE_H
