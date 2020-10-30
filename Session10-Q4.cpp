#include<iostream>
#include<conio.h>

using namespace std;

template <class Num>

class Calculator
{
    private:
        Num n1, n2;
    public:
        Calculator(Num a, Num b)
        {
            n1 = a;
            n2 = b;
        }
        
        Num add()
        {
            return n1+n2;
        }

        Num sub()
        {
            return n1-n2;
        }

        Num mul()
        {
            return n1*n2;
        }

        Num div()
        {
            return n1/n2;
        }

        void output()
        {
            cout << n1 << " + " << n2 << " = " << add() << endl;
            cout << n1 << " - " << n2 << " = " << sub() << endl;
            cout << n1 << " * " << n2 << " = " << mul() << endl;
            cout << n1 << " / " << n2 << " = " << div() << endl;
        }
};

int main()
{
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    Calculator <int> obj1(a,b);
    obj1.output();
    return 0;
}