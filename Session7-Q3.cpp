/**
 * WAP that checks a person's age for voting, 
 * all the exceptions are to be 
 * handled with exception handling.
**/

#include<iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cout << "\n\n\t\t*****Voting Ballot*****\n\n";
    cout << "Enter your details:\n";
    cout << "Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    try
    {
        if(age < 18)
            throw age;
        else
        {
            cout << endl << name << " you are cleared for the voting process.\n\n";
        }
    }
    catch(int er)
    {
        if(er < 1)
        {
            cout << "\nPlease enter a valid age.\n\n";
        }
        else
        {
            cout << endl << name << ", you must be atleast 18 to be included in the voting process.\n";
            cout << "Current age: " << age << endl;
            cout << "You will be eligible to vote in " << (18-er);
            if((18-er) == 1) 
                cout << " year.\n\n";
            else
                cout << " years.\n\n"; 
        }
    }
    return 0;
}