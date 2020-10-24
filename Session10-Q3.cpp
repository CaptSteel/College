//WAP that accepts two different data-types as arguments to the template function and returns the value.

#include<iostream>
#include<conio.h>

using namespace std;

template <class dAdd>

dAdd AddNos(dAdd a1, dAdd a2)
{
    return (a1 + a2);
}

int main()
{
    int n1;
    float n2;
    char ch = 'n';
    do
    {
        cout << "Enter an integer: ";
        cin >> n1;
        cout << "Enter a float: ";
        cin >> n2;
        cout << n1 << " + " << n2 << " = " << AddNos(n1,n2) << endl;
        cout << "\nPress Y to run again.\n";
        ch = getch();
    } while (ch=='y'||ch=='Y');
    return 0;
}