#ifndef POSTALCODES_H
#define POSTALCODES_H

#include <iostream>

using namespace std;
class PostalCodes
{
private:
    string postCode;
    int numOfPeople=1;
public:
    PostalCodes();
    PostalCodes(string postCode);

    void addMan();
    const string &getPostCode() const;
    int getNumOfPeople() const;
    void setNumOfPeople(int newNumOfPeople);
};

#endif // POSTALCODES_H
