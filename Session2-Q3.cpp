#include<iostream>
#include<math.h>

using namespace std;

void autoStorageClass();
void staticStorageClass();
void externStorageClass();
void registerStorageClass();

void autoStorageClass()
{
    int a;
    cout << "\n\n*****Auto Storage Class Example*****\n\n";
    cout << "Enter a number: ";
    cin >> a;
    cout << a << endl;
}

void staticStorageClass()
{
    static int a = 10;
    cout << "\n\n*****Static Storage Class Example*****\n\n";
    for(int i = 0; i<a--; i++)
    {
        cout << i << "\t" << a << endl;
    }
}

int g = 500;                        //global declaration
void externStorageClass()
{
    cout << "\n\n*****Extern Storage Class Example*****\n\n";
    extern int g;
    cout << "Global variable: " << g << endl;
}

void registerStorageClass()
{
    cout << "\n\n*****Register Storage Class Example*****\n\n";
    register int a = 7;
    for(int i = 0; i<--a; i++)
    {
        cout << i << "\t" << a << endl;
    }
}

int main()
{
    int a, b;
    int c;
    cout << "\n\n1) autoStorageClass()\n";
    cout << "2) staticStorageClass()\n";
    cout << "3) externStorageClass()\n";
    cout << "4) registerStorageClass()\n";
    cout << "choose: ";
    cin >> c;
    switch (c)
    {
    case 1:
        autoStorageClass();
        break;
    case 2:
        staticStorageClass();
        break;
    case 3:
        externStorageClass();
        break;
    case 4:
        registerStorageClass();
        break;
    default:
        cout << "\n\nExiting...\n\n";
        break;
    }
    return 0;
}
