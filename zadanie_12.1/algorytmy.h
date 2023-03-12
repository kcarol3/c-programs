#ifndef ALGORYTMY_H
#define ALGORYTMY_H

#include <vector>
#include <iostream>

using namespace std;

class Algorytmy
{
    vector<float> wektor;
    int n;
public:
    Algorytmy();
    Algorytmy(int newN);
    void show();
    float average();
    int countPositives();
    void delNegatives();
    void sortPosNeg();
    void neg();
    int countIfSmaller(float nb);
    const vector<float> &getWektor() const;
};

#endif // ALGORYTMY_H
