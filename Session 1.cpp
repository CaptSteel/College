#include<iostream>

using namespace std;

/* Session 1 assignment consists of 5 questions. */
/* Solution for each question is in it's respective function. */

int largest_of_three_nos();         // Q1
int factorial_no_for_loop();        // Q2
int rand_nos_given_rng();           // Q3
int nos_pow_recursive();            // Q4
int avg_mks_three_subjs();          // Q5

int main()
{
    //largest_of_three_nos();
    //factorial_no_for_loop();
    return 0;
}

int largest_of_three_nos()
{
    int a, b, c;
    cout << "*****Largest of three numbers*****\n\n";
    cout << "Enter three numbers(leave a space after each number, like so: \"9 123 89\"\nEnter here: ";
    cin >> a >> b >> c;
    if(a > b && a > c)
        cout << "Largest number: " << a;
    else if(b > a && b > c)
        cout << "Largest number: " << b;
    else if(c > a && c > b)
        cout << "Largest number: " << c;
    else if(a == b && a == c)        //where all three numbers are the same
        cout << "No largest number.";
    else
        cout << "Error!";
    return 1;
}

int factorial_no_for_loop()
{
    int n, f = 1;
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
    cout << "\nf" << f;
    
    return 1;
}

int rand_nos_given_rng()
{
    
}