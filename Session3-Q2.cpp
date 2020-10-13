#include<iostream>
#include<string.h>
#include<windows.h>

using namespace std;

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int n1, n2;
    int choice, err;
    char ch;
    do
    {   system("cls");
        cout << "\nChoose:\n";
        cout << "1) Call by value.\n";
        cout << "2) Call by reference (addresses).\n";
        cout << "3) Call by reference (pointers).\n";
        cout << "4) Exit.\n";
        cin >> choice;
        try
        {
            if(isalpha(choice))
                throw choice;
            else
            {
                cout << "Enter n1: ";
                cin >> n1;
                cout << "Enter n2: ";
                cin >> n2;

                switch(choice)
                {
                    case 1:
                        swap(n1, n2);           //call by value
                        break;
                    case 2:
                        swap(&n1, &n2);         //call by reference (addresses)
                        break;
                    case 3:
                        //swap();               //call by reference (pointers)
                        break;
                    case 4:
                        exit(0);
                        break;
                    default:
                        cout << "\nWrong option.\n";
                        break;
                }
                cout << "After swapping: \n";
                cout << "n1 = " << n1 << "\tn2 = " << n2 << endl;
            }
        }
        catch(int err)
        {
            cout << "\nEnter a valid option:\n";
        }
        cout << "Press Y to run again.\n";
        cin >> ch;
    }while(ch =='y' || ch == 'Y');

    return 0;
}