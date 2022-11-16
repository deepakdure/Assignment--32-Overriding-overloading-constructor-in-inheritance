#include <iostream>
using namespace std;
class Rectangle
{
    float ar;

public:
    void display()
    {
        cout << "Area of Rectangle is :- " << ar << endl
             << endl;
    }
    void area(int x, int y)
    {
        ar = x * y;
    }
    void area(double x, double y)
    {
        ar = x * y;
    }
    void area(float x, double y)
    {
        ar = x * y;
    }
};
int main()
{
    Rectangle area;

    area.area(3, 5);
    area.display();

    area.area(12.6, 9.9);
    area.display();

    area.area(4.3, 6.6);
    area.display();
}
