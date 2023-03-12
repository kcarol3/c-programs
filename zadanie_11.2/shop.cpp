#include "shop.h"

Shop::Shop()
{

}

Shop::Shop(string newShopName)
{
    cout<<"Konstruktor sklepu"<<endl;
    this->shopName = newShopName;
}

void Shop::addWarehouse(Warehouse newWarehouse)
{
    this->warehouses.push_back(newWarehouse);
}

void Shop::sellGood(string goodName, int count)
{
    bool sold = false;
    for(auto ptr: this->warehouses){
        auto war = ptr.getItems();
        for(auto i: war){
            if(i->getCountOfItem()>count && i->getItemName()==goodName){
                cout<<"Sprzedano z magazynu "<<ptr.getWarehouseName()<<endl;
                i->setCountOfItem(i->getCountOfItem()-count);
                sold = true;
                break;
            }
        }
        if(sold) break;
    }
    if(!sold){
        cout<<"Nie udalo sie sprzedac!"<<endl;
    }
}

void Shop::showWarehouses()
{
    cout<<"Magazyny:"<<endl;
    for(auto i:this->warehouses){
        cout<< i.getWarehouseName()<<endl;
    }
}

void Shop::showShopName()
{
    cout<<"Nazwa sklepu:"<<this->shopName<<endl;
}
