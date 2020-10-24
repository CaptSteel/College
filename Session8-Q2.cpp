#include<iostream>

using namespace std;

class Customer
{
    protected:
        string name, ID;

    public:
        void getdata()
        {
            cout << "Enter details:\n";
            cout << "Customer Name: ";
            getline(cin, name);
            cout << "Customer ID";
            getline(cin, ID);
        }

        void display()
        {
            cout << "\nCustomer Name: " << name;
            cout << "\nCustomer ID: " << ID;
        }
};

class Depositer : public Customer
{
    protected:
        string accNo;
        double balance;
    public:
        void getdata()
        {
            cout << "Acc No.: ";
            getline(cin,accNo);
            cout << "Balance: ";
            cin >> balance;
        }

        void display()
        {
            cout << "\nAccount Number: " << accNo;
            cout << "\nBalance: " << balance;
        }
};

class Borrower : public Depositer
{
    protected:
        long int loanNo;
        double loanAmount;
    
    public:
        void getdata()
        {
            cout << "Loan number: ";
            cin >> loanNo;
            cout << "Loan Amount: ";
            cin >> loanAmount;
        }

        void display()
        {
            cout << "\nLoan no.: " << loanNo;
            cout << "\nLoan amount: " << loanAmount;
        }
};

int main()
{
    Borrower obj1;

    //taking input
    obj1.Customer::getdata();
    obj1.Depositer::getdata();
    obj1.Borrower::getdata();

    //printing output
    obj1.Customer::display();
    obj1.Depositer::display();
    obj1.Borrower::display();
    return  0;
}