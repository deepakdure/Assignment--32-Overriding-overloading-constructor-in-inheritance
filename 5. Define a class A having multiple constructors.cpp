#include <iostream>
#include <string.h>
#include <string>
using namespace std;
class Person
{
protected:
    string name;
    int age;

public:
    Person()
    {
        cout << "Person Default constructor called" << endl;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "Person Parameterized called" << endl;
    }
};

class Student : public Person
{
private:
    int rank;

public:
    Student() : Person()
    {
        cout << "Student Default constructor called" << endl;
    }
    Student(int rank, string name, int age) : Person(name, age)
    {
        this->rank = rank;
        cout << "Student Parameterized called" << endl;
    }
    void Show_data()
    {
        cout << "Student Name       :-  " << name << endl
             << "Student Personge   :-  " << age << endl
             << "Student Rank       :-  " << rank << endl;
    }
};
int main()
{
    Student s1(2, "Deepak", 22);
    s1.Show_data();
    return 0;
}