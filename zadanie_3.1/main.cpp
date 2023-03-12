#include <iostream>

using namespace std;

template <typename T>
class Adding
{
private:
    T element;
public:
    Adding(T value);
    void add(T value);
    void show();
};
template <typename T>
Adding<T>::Adding(T value)
{
    element=value;
}
template <typename T>
void Adding<T>::add(T value)
{
    element=element+value;
}
template <typename T>
void Adding<T>::show()
{
    cout<<"Element: "<<element<<endl;
}

template <typename T>
class Student
{
private:
    string name;
    int mark;
public:
    Student(int mark, string name)
    {
        this->mark = mark;
        this->name = name;
    }
    Student()
    {
    }
    void show()
    {
        cout <<"imie: "<<name<<" ocena "<<mark<<endl;
    }
    void showMark()
    {
        cout <<mark<<endl;
    }
};
template<>
void Student<int>::showMark()
{
    cout <<"Twoja ocena to: "<<mark<<endl;
}
template<>
class Student<string>
{
private:
    string name;
    int mark;
public:
    Student(int mark, string name)
    {
        this->mark = mark;
        this->name = name;
    }
    Student()
    {
    }
    void show()
    {
        cout <<"imie: "<<name<<" ocena "<<mark<<endl;
    }
    int showMark()
    {
        string word [6]= {"jedynka","dwojka","trojka","czworka",
                          "piatka","szostka"};
        cout <<"Twoja ocena to: "<<word[mark-1]<<endl;
        return mark;
    }
};

int main()
{
    /*Adding<int> a1(5);
    a1.add(6);
    a1.show();
    Adding<string> a2("Pro");
    a2.add("gramowanie");
    a2.show();*/

    Student<float> s(5,"Ala");
    s.showMark();
    Student<int> s1(5,"Ala");
    s1.showMark();
    Student<string> s2(5,"Ala");
    s2.showMark();


    return 0;
}
