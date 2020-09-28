/**
 * 
 * 
**/


#include<iostream>

using namespace std;

int f = 1;

void exponent(double x, double n)
{
    f = f * x;
    n--;
    if(n == 0)
        cout << "Value = " << f;
    else
        exponent(x,n);              //recursive call
}

int main()
{
    int a, b;
    cout << "\n\n*****Exponent Calculator*****\n\n";
    cout << "Enter details:\n";
    cout << "Base: ";
    cin >> a;
    cout << "Raised to: ";
    cin >> b;
    exponent(a, b);
    return 0;
}