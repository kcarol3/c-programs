#ifndef ARRAY_H
#define ARRAY_H
#include <iostream>

using namespace std;

template <typename T>
class Array
{
private:
    T *tab;
    int maxSize;
    int firstFreeInd;
public:
    Array();
    Array(int size);

    ~Array();

    void sortUp();
    T maxElement();
    void show();
    void append(T element);
    T getElement(int index);

};

template <typename T>
Array<T>::Array()
{
    maxSize = 10;
    tab = new T[maxSize];
    firstFreeInd = 0;
}

template<typename T>
Array<T>::Array(int size)
{
    maxSize = size;
    tab = new T[maxSize];
    firstFreeInd = 0;
}

template<typename T>
Array<T>::~Array()
{
    delete [] tab;
}

template<typename T>
void Array<T>::sortUp()
{
    int temp, j;

       for( int i = 1; i < maxSize; i++ )
       {
           temp = tab[ i ];

           for( j = i - 1; j >= 0 && tab[ j ] > temp; j-- )
                tab[ j + 1 ] = tab[ j ];

           tab[ j + 1 ] = temp;
       }
}

template<typename T>
T Array<T>::maxElement()
{
    T maxValue = tab[0];
    for (int i=1;i<maxSize;i++) {
        if (maxValue<tab[i]) {
            maxValue=tab[i];
        }
    }
    return maxValue;
}

template<typename T>
void Array<T>::show()
{
    for (int i=0;i<maxSize;i++) {
        cout<<tab[i]<<endl;
    }
}

template<typename T>
void Array<T>::append(T element)
{
    tab[firstFreeInd] = element;
    firstFreeInd++;
}

template<typename T>
T Array<T>::getElement(int index)
{
    return tab[index];
}

template<>
inline string Array<string>::maxElement(){
    int maxLength=tab[0].length();
    int ind=0;
    for (int i=1;i<maxSize;i++) {
        if (maxLength < (int)tab[i].length()) {
            maxLength=tab[i].length();
            ind=i;
        }
    }
    return tab[ind];
}

template<>
inline void Array<string>::sortUp(){
    int k;
        for( int i = 0; i < maxSize; i++ )
        {
            k = i;
            for( int j = i + 1; j < maxSize; j++ )
            if( tab[ j ].length() < tab[ k ].length() )
                 k = j;

            swap( tab[ k ], tab[ i ] );
        }
}


#endif // ARRAY_H
