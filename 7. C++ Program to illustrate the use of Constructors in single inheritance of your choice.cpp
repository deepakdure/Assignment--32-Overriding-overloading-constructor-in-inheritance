#include <iostream>
#include <string>
using namespace std;
class Person
{
    string name;
    int age;

public:
    Person()
    {
    }
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void displayPerson()
    {
        cout << "Name  :- " << name << endl
             << "Age   :- " << age << endl;
    }
};

class Student : public Person
{
    string batch;
    int rank;

public:
    Student(string name, int age, string batch, int rank) : Person(name, age)
    {
        this->batch = batch;
        this->rank = rank;
    }
    void displyStudent()
    {
        displayPerson();
        cout << "Batch :- " << batch << endl
             << "Rank  :- " << rank;
    }
    // string getbatch()
    // {
    //     return batch;
    // }
};
int main()
{
    Student s1("Divyanshu", 21, "C/C++", 10);
    s1.displayPerson();
    cout << endl;
    s1.displyStudent();
    cout << endl
         << endl;
}