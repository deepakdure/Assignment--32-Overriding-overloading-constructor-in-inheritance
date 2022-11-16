#include <iostream>
using namespace std;
class Addition
{
    double sum = 0;
    // int x, y, z;
public:
    void display()
    {
        cout << sum << endl;
    }
    void Add(int x, int y)
    {
        sum = x + y;
    }
    void Add(int x, double y)
    {
        sum = x + y;
    }
    void Add(double x, double y)
    {
        sum = x + y;
    }
    void Add(int x, int y, int z)
    {
        sum = x + y + z;
    };
    void Add(double x, double y, double z)
    {
        sum = x + y + z;
    }
};
int main()
{
    Addition a1;

    cout << "Sum of 2 numbers is = ";
    a1.Add(5, 10);
    a1.display();

    cout << "Sum of 2 numbers is = ";
    a1.Add(5, 8.17);
    a1.display();

    cout << "Sum of 2 numbers is = ";
    a1.Add(50.5, 8.17);
    a1.display();

    cout << "Sum of 3 numbers is = ";
    a1.Add(3, 6, 9);
    a1.display();

    cout << "Sum of 3 numbers is = ";
    a1.Add(5.7, 2.9, 4.6);
    a1.display();

    return 0;
}