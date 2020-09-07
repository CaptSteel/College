#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class Boss
{
    private: //only the boss can access
        int mySalary = 0;

    public:  //anyone can access.
        int takeInput()
        {
            cout << "Enter your salary: ";
            cin >> mySalary;
            return 0;
        }
        int showEverything()
        {
            cout << "\nSalary: " << mySalary;
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
};

int main()
{
    Boss b1;
    Workers w1;

    cout << "Boss:\n";
    b1.takeInput();
    b1.showEverything();

    cout << "\n\nWorkers:\n";
    w1.takeInput();
    w1.askName();
    w1.showEverything();
    w1.showName();

    return 0;
}
