#include <iostream>
using namespace std;
class Fact
{
    long long int fact;
    int n;

public:
    Fact()
    {
    }
    Fact(int n)
    {
        this->n = n;
        fact = 1;
    }
    Fact(Fact &x)
    {
        n = x.n;
        fact = 1;
    }
    void calculate()
    {
        int i;
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    }
    void display()
    {
        cout << "Factorial of n is :-  " << fact << endl;
    }
};
int main()
{
    int n;
    cout << "Enter a number for factorial :- ";
    cin >> n;

    Fact f1(n);
    f1.calculate();
    f1.display();

    Fact f2(f1);
    f2.calculate();
    f2.display();
    cout << endl;
    return 0;
}