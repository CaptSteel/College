#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class Boss
{
    private: //only the boss can access


    public:  //anyone can access.
        int mySalary = 0;
        int userHours = 0;
        int bonus = 600;
        int hours = 63;
        int takeInput()
        {
            cout << "Enter your initial salary: ";
            cin >> mySalary;
            cout << "How many hours did you work: ";
            cin >> userHours;
            return 0;
        }
        int showEverything()
        {
            cout << "\nSalary: " << mySalary;
            return 0;
        }
        int calculateBossHours()
        {
            if(userHours >= hours)
            {
                mySalary+=bonus;
            }
            cout << "\nFinal Salary: " << mySalary;
            return 0;
        }
};

class Workers : public Boss
{
    private: //only workers can access
        string names;
    public:
        int askName()
        {
            cout << "Enter your name: ";
            cin >> names;
            return 0;
        }
        int showName()
        {
            cout << "\nName: " << names;
            return 0;
        }
        int calculateWorkerHours()
        {
            if(userHours >= hours)
            {
                mySalary+=bonus;
            }
            cout << "\nFinal Salary: " << mySalary;
            return 0;
        }
};

int main()
{
    Boss b1;
    Workers w1;

    cout << "Boss:\n";
    b1.takeInput();
    b1.showEverything();
    b1.calculateBossHours();

    cout << "\n\nWorkers:\n";
    w1.takeInput(); //--------------------> from Base class
    w1.askName();
    w1.showEverything();  //--------------> from Base class
    w1.calculateWorkerHours(); //---------> uses variables/data members from base class
    w1.showName();

    cout << "\n\n";
    return 0;
}
