/**
 * 
**/

#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    double a, b;
    cout << "\n\n***** <math.h> *****\n\n";
    cout << "Enter values: \n";
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << a << " raised to " << b << " = " << pow(a,b) << endl;
    cout << "Exponent of " << a << " = " << exp(a) << endl;
    cout << "Log of " << b << " = " << log(b) << endl;
    cout << "Square-root of " << a << " = " << sqrt(a) << endl;
    cout << "Sine of " << b << " = " << sin(b) << endl;
    return 0;
}