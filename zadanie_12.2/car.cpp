#include "car.h"

const string &Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYear() const
{
    return year;
}

void Car::setYear(int newYear)
{
    year = newYear;
}

int Car::getCapacity() const
{
    return capacity;
}

void Car::setCapacity(int newCapacity)
{
    capacity = newCapacity;
}

void Car::show()
{
    cout<<"Model: "<<model<<", Rok produkcji: "<<year<<", Pojemnosc: "<<capacity<<endl;
}

Car::Car()
{

}

Car::Car(const string &model, int year, int capacity) : model(model),
    year(year),
    capacity(capacity)
{}
