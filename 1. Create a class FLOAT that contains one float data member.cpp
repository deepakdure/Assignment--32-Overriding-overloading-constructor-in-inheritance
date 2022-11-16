#include <iostream>
using namespace std;
class FLOAT
{
    float d;

public:
    FLOAT() {}
    FLOAT(float num)
    {
        d = num;
    }
    FLOAT operator+(FLOAT x)
    {
        FLOAT temp;
        temp.d = d + x.d;
        return temp;
    }
    FLOAT operator-(FLOAT x)
    {
        FLOAT temp;
        temp.d = d - x.d;
        return temp;
    }
    FLOAT operator*(FLOAT x)
    {
        FLOAT temp;
        temp.d = d * x.d;
        return temp;
    }
    FLOAT operator/(FLOAT x)
    {
        FLOAT temp;
        temp.d = d / x.d;
        return temp;
    }
    void display()
    {
        cout << d;
    }
};
int main()
{
    FLOAT x = 15.3, y = 2.1, z;

    z = x + y;
    cout << "ADDITION            = ";
    z.display();

    z = x - y;
    cout << "\n\nSUBTRACTION         = ";
    z.display();

    z = x * y;
    cout << "\n\nMULTIPLICATION      = ";
    z.display();

    z = x / y;
    cout << "\n\nDIVISION            = ";
    z.display();

    cout << endl
         << endl;
    return 0;
}