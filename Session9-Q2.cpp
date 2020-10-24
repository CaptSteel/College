#include<iostream>

using namespace std;

class IncrementStuff
{
    private: 
        int n;
    public:
        IncrementStuff()                //Default
        {                               
            this->n = 0;
        }
        IncrementStuff(int a)           //Parameterised
        {
            this->n = a;
        }

        IncrementStuff operator ++ ()   //Pre-increment
        {
            IncrementStuff temporaryVar;
            temporaryVar.n = n + 100;
            return temporaryVar;
        }
        IncrementStuff operator ++ (int)    //Post-increment
        {
            IncrementStuff temporaryVar;
            temporaryVar.n = n + 100;
            return temporaryVar;
        }

        void print()
        {
            cout << "N = " << n << endl;
        }
};

int main()
{
    int n;
    cout << "Enter number to increment: ";
    cin >> n;
    IncrementStuff instance1(n);
    IncrementStuff instance2;

    instance2 = instance1++;
    instance2.print();
    return 0;
}