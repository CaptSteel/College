#include<iostream>

using namespace std;

class billing
{
private:
    string name;
    int id, fbill;
    double units;

public:
    void read();
    void display();
    void bill_calculator();
};
    
void billing::read()
{
    cout << "Customer Details:" << endl;
    cout << "Customer name: ";
    cin >> name;
    cout << "Customer ID: ";
    cin >> id;
    cout << "Number of units consumed: ";
    cin >> units;
}
void billing::display()
{
    cout << "\nCustomer Details are:" << endl;
    cout << "\ncustomer ID is: " << id;
    cout << "\nName of the customer is: " << name;
    cout << "\nUnits consumed are: " << units;
    cout << "\nBill of the customer is: " << fbill;
}
void billing::bill_calculator()
{
    if(units <= 100)
        fbill = units*5;
    else if(units <= 300)
        fbill = 100*5+(units-100)*7;
    else
        fbill = 100*5+200*7+(units-300)*12;
}

int main()
{
    billing b1;

    b1.read();
    b1.bill_calculator();
    b1.display();
    
    return 0;
}
