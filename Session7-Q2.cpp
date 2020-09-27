/**
 * WAP that calculates the square-root of 
 * a number and handles the 
 * exception that a number 
 * cannot be negative.
**/

#include<iostream>
//#include<typeinfo>       // operator typeid
//#include<exception>      // std::exception
#include<math.h>

using namespace std;

int main()
{
    int num;
    cout << "\n\nEnter a number: ";
    cin >> num;
    try
    {
        if(num<0)
            throw num;          //throw error
        //else
        {
            cout << "Sqrt of " << num << " = " << sqrt(num) << endl << endl; 
        }
    }
    catch(int x)                //catch it here
    {
        cout << "\nFor " << x << ", square root does not exist!\n\n";
    }
    
    return 0;
}