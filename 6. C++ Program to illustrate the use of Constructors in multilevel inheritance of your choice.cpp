#include <iostream>
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
        cout << "Default constructor called" << endl;
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
        cout << "Person Parameterized Called" << endl;
    }
    void displayPerson()
    {
        cout << "Name    :- " << name << endl
             << "Age     :- " << age << endl;
    }
};
class Student : public Person
{
protected:
    int rank;

public:
    Student(string name, int age, int rank) : Person(name, age)
    {
        this->rank = rank;
        cout << "Student Parameterized Called" << endl;
    }
    void displayStudent()
    {
        displayPerson();
        cout << "Rank    :- " << rank << endl;
    }
    int getrank()
    {
        return rank;
    }
};
class Batch : public Student
{
private:
    string batch;

public:
    Batch(string name, int age, int rank, string batch) : Student(name, age, rank)
    {
        this->batch = batch;
        cout << "Batch Parameterized Called" << endl
             << endl;
    }
    void displayBatch()
    {
        displayPerson();
        cout << "Rank    :- " << getrank() << endl;
        cout << "Batch   :- " << batch << endl;
    }
};
int main()
{
    Batch b1("Divyanshu", 21, 2, "C/C++");
    b1.displayPerson();
    cout << endl;
    b1.displayStudent();
    cout << endl;
    b1.displayBatch();
}
