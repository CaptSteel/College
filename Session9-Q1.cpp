/***
 * 1. Use the concept of Operator overloading to overload ‘-’ operator in order to subtract two complex numbers.

2. 
Use the concept of Operator overloading to redefine the 
use of ‘++’ so that when this is encountered, then the value of variable increases by 100 and not by 1.

Example: ++x : x=x+100

3. WAP that accepts two objects of time class in hh:mm:ss format and is finally add the two times and display the addition result.

Example: class time: int hrs, int min, int sec

Obj1: 09:22:35

Obj2: 02:45:53

Overload ‘+’ operator to add two objects to get total time.
 * 
*/
#include<iostream>
#include<conio.h>

using namespace std;

class ComplexNumbers
{
    private:
        double r, i;
    public:
        ComplexNumbers()
        {
            r = 0;
            i = 0;
        }

        ComplexNumbers operator -(const ComplexNumbers& tempObj)
        {
            ComplexNumbers t;
            t.r = r - tempObj.r;
            t.i = i - tempObj.i;
            return t;
        }

        void getData()
        {
            cout << "Enter complex number:\n";
            cout << "\tReal: ";
            cin >> r;
            cout << "\tImaginary: ";
            cin >> i;
        }

        void display()
        {
            if (i < 0)
                cout << "Output Complex number: " << r << i << "i\n";
            else if(i > 0)
                cout << "Complex number = " << r << " + " << i << "i\n";
            else
                cout << "Unknown\n";
        }
};

int main()
{
    ComplexNumbers p1, p2, ans;

    p1.getData();
    p2.getData();
    ans = p1 - p2;
    cout << "After subtracting:\n";
    ans.display();
    return 0;
}