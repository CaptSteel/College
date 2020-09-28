/**
 * WAP to find the largest of three 
 * numbers and print the largest number.
**/

#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    cout << "\n*****Largest of three numbers*****\n\n";
    cout << "Enter three numbers(leave a space after each number, like so: \"9 123 89\"\nEnter here: ";
    cin >> a >> b >> c;
    if(a > b && a > c)
        cout << "Largest number: " << a;
    else if(b > a && b > c)
        cout << "Largest number: " << b;
    else if(c > a && c > b)
        cout << "Largest number: " << c;
    else if(a == b && a == c)           //where all three numbers are the same
        cout << "No largest number.";
    else
        cout << "Error!";
    return 0;
}