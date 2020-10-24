#include<iostream>

using namespace std;

class Parent1WhipMaster
{
    public:
        string ticketID;
        void enterTicket()
        {
            cout << "Enter ticketID: ";
            cin >> ticketID;
        }
};

class Parent2Clown
{
    public:
        string ticketID;
        void enterTicket()
        {
            cout << "Enter ticketID: ";
            cin >> ticketID;
        }
};

class ChildFrontGate : public Parent1WhipMaster, public Parent2Clown
{
    //both Parent1Whip//
};

int main()
{
    ChildFrontGate obj1;
    obj1.enterTicket();
    return 0;
}