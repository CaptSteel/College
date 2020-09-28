/**
 * WAP to find the factorial of a number using for loop.
**/

#include<iostream>

using namespace std;


int main()
{
    int n;
    long long int f = 1;
    cout << "\n\t\t*******Factorial*******\n\n";
    cout << "Enter a +ve number: ";
    cin >> n;
    if(n<0)
    {
        cout << "Invalid! -ve numbers cannot be calculated.\n";
        return 1;
    }
    //** exit if negative numbers encountered. **//
    
    if(n==0 || n==1)
    {
        cout << "Factorial of " << n << " is 1.";
        return 1;
    }
    //** return to main if n == 1 or == 0  **//

    //** continue for n>1 **//
    for(int i=1; i<=n; i++)
    {
        f *= i;
    }
    cout << f << endl << endl;
    return 0;
}