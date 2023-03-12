#include "warehouse.h"


void Warehouse::showAllGoods()
{
    for(auto ptr: items){
        cout<<"Nazwa przedmiotu: "<<ptr->getItemName() << " Ilosc: "<< ptr->getCountOfItem()<<endl;
    }
}


const string &Warehouse::getWarehouseName() const
{
    return warehouseName;
}

void Warehouse::addItem(string name, int count)
{
    shared_ptr<Item> spr1(new Item(name,count));
    this->items.push_back(spr1);
}

Warehouse::Warehouse(string name)
{
    cout<<"Konstruktor magazynu"<<endl;
    shared_ptr<Item> spr1(new Item("Fotele",90));
    shared_ptr<Item> spr2(new Item("Biurka",120));
    shared_ptr<Item> spr3(new Item("Krzesla",180));
    shared_ptr<Item> spr4(new Item("Stoliki",45));
    shared_ptr<Item> spr5(new Item("Szafy",30));
    this->items.push_back(spr1);
    this->items.push_back(spr2);
    this->items.push_back(spr3);
    this->items.push_back(spr4);
    this->items.push_back(spr5);

    this->warehouseName = name;
}

