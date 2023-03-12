#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

using namespace std;

class Student
{
    string name;
    string surname;
    char gender;
    int grade;
    string mail;
public:
    Student();
    Student(string name, string surname,char gender,int grade,string mail);
    string parseStudentToString();
    void showAll();
    void showStudent(string name, string surname, char gender, int grade, string mail);
    const string &getName() const;
    void setName(const string &newName);
};

#endif // STUDENT_H
