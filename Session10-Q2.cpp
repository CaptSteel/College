#include<iostream>
#include<conio.h>

using namespace std;

template <class Swap>

void Lswap(Swap &n1, Swap &n2)
{
    Swap temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int a, b;
    char ch = 'n';
    do
    {
        cout << "\n\nEnter numbers:\n";
        cout << "1 -> ";
        cin >> a;
        cout << "2 -> ";
        cin >> b;
        cout << "\nBefore swapping: " << a << "\t" << b;
        Lswap(a,b);
        cout << "\nAfter swapping:  " << a << "\t" << b;
        cout << "\nPress Y to run again.\n";
        ch = getch();
    } while (ch=='y'||ch=='Y');
    return 0;
}