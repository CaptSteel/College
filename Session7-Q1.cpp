/**
 * WAP that accepts and adds two complex numbers using :
 * Default constructors
 * Parameterized constructors
**/

#include<iostream>

using namespace std;

class complexAddition
{
private:
    int complex1, complex2;
    int num1, num2;
public:
    complexAddition();                   //Default constructor declaration
    complexAddition(int,int,int,int);    //Parametised constructor declaration

    void display()
    {
        cout << "("<< num1 << " + " << complex1 << "i)";
        cout << " + ("<< num2 << " + " << complex2 << "i)\n";
        cout << "= " << (num1+num2) << " + " << (complex1+complex2) << "i\n";
    }
};

//**    Default constructor definition      **//
complexAddition::complexAddition()
{
    complex1 = complex2 = 1;
    num1 = num2 = 1;
}

//**    Parametised constructor definition      **//
complexAddition::complexAddition(int a, int b, int c, int d)
{
    complex1 = a;
    complex2 = b;
    num1 = c;
    num2 = d;
}


int main()
{
    complexAddition test1;
    test1.display();        //no parameters passed

    complexAddition test2(7, 13, 8, 63);
    test2.display();        //parameters passed
    return 0;
}