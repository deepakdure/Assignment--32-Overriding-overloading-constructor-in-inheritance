// #include <iostream>
// #include <math.h>
#include <bits/stdc++.h>
using namespace std;
class Area
{
    float AoR = 0, AoT = 0, AoC = 0;

public:
    Area() {}
    Area(int width, int length)
    {
        AoR = width * length;
    }
    Area(int redius)
    {
        AoC = 3.14 * redius * redius;
    }
    Area(int a, int b, int c)
    {
        float z = (a + b + c) / 2.0;
        AoT = sqrt(z * (z - 1) * (z - b) * (z - c));
    }
    void displayTriangle()
    {
        if (AoT == 0)
        {
            cout << "This Length is not valid for triangle" << endl;
        }
        else
            cout << "Area of Triangle  =  " << AoT << endl;
    }
    void displayCircle()
    {
        cout << "Area of Circle    =  " << AoC << endl;
    }
    void displayRectangle()
    {
        cout << "Area of Rectangle  =  " << AoR << endl;
    }
};
int main()
{
    while (true)
    {
        cout << endl;
        cout << "1. Calculate the Area of Triangle" << endl;
        cout << "2. Calculate the Area of Rectangle" << endl;
        cout << "3. Calculate the Area of Circlle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter Your Choice" << endl;
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the values of Edges :- " << endl;
            int a, b, c;
            cin >> a >> b >> c;
            Area a1(a, b, c);
            a1.displayTriangle();
            break;
        }
        case 2:
        {
            cout << "Enter the value of width and length :- " << endl;
            int w, l;
            cin >> w >> l;
            Area a2(w, l);
            a2.displayRectangle();
            break;
        }

        default:
            break;
        }
    }
}