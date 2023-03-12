#include <iostream>
#include "warehouse.h"
#include "shop.h"
#include <memory>
using namespace std;

int main()
{
    unique_ptr<Warehouse> magazine1(new Warehouse("Meblowy"));
    unique_ptr<Warehouse> magazine2(new Warehouse("Gospodarczy"));
    unique_ptr<Shop> shop1(new Shop("Szop"));

    magazine2->addItem("Worki",560);

    shop1->addWarehouse(*magazine1);
    shop1->addWarehouse(*magazine2);

    shop1->showWarehouses();
    cout<<endl;

    shop1->showShopName();
    shop1->sellGood("Worki",55);

    magazine2->showAllGoods();

    return 0;
}
