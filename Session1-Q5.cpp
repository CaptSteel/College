/**
 * WAP to accept the marks of a student in 
 * three subjects and calculate its 
 * average using a function.
**/



#include<iostream>

using namespace std;

void avg(int a, int b, int c)
{
    cout << (double(a+b+c)/3) << endl << endl;
}

int main()
{
    int a,b,c;
    cout << "\n\n*****Avg*****\n\n";
    cout << "Enter marks: \n";
    cout << "Sub1: ";
    cin >> a;
    cout << "Sub2: ";
    cin >> b;
    cout << "Sub3: ";
    cin >> c;
    cout << "Average marks: ";
    avg(a,b,c);
    return 0;
}