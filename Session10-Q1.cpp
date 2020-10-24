/**
 *  WAP to display the largest among two numbers using function templates.
    WAP to swap data using function templates.
    WAP that accepts two different data-types as arguments to the template function and returns the value.
    WAP to add, subtract, multiply and divide two numbers using class template. 
 * 
 **/

#include<iostream>
#include<conio.h>

using namespace std;

template <class LargestNo>

LargestNo Lnumber(LargestNo n1, LargestNo n2)
{
    return (n1 > n2) ? n1 : n2;
}

int main()
{
    int k1, k2;
    char ch = 'n';
    do
    {
        cout << "\n\nEnter numbers:\n";
        cout << "1 -> ";
        cin >> k1;
        cout << "2 -> ";
        cin >> k2;
        cout << "Largest number: " << Lnumber(k1, k2) << endl;
        cout << "Press Y to run again.\n";
        ch = getch();
    } while (ch=='y'||ch=='Y');
    
    return 0;
}