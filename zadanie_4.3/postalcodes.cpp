#include "postalcodes.h"

const string &PostalCodes::getPostCode() const
{
    return postCode;
}

int PostalCodes::getNumOfPeople() const
{
    return numOfPeople;
}

void PostalCodes::setNumOfPeople(int newNumOfPeople)
{
    numOfPeople = newNumOfPeople;
}

PostalCodes::PostalCodes()
{

}

PostalCodes::PostalCodes(string postCode)
{
    this->postCode=postCode;
}

void PostalCodes::addMan(){
    this->numOfPeople++;
}
