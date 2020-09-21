#include<iostream>

using namespace std;

//Declaring functions before use
int use_this_instead_of_constructors(); // D:

int main()
{
    use_this_instead_of_constructors();
    return 0;
}

int use_this_instead_of_constructors()
{
    class student_exam
    {
    private:
        int sub1, sub2, sub3;
        string name, id;
    public:
        void getData(int a, int b, int c, string d, string e)
        {
            this->sub1 = a;
            this->sub2 = b;
            this->sub3 = c;
            this->name = d;
            this->id   = e;
            
        }

        void display()
        {
            cout << "\nStudent details:\n";
            cout << "Name: " << name;
            cout << "\nID: " << id;
            cout << "\n\nMarks:\n";
            cout << "Sub1: " << sub1;
            cout << "\nSub2: " << sub2;
            cout << "\nSub3: " << sub3;
        }
    };//Class ends


    //**    Declaring datatypes to pass to functions in class   **//
    int n1, n2, n3;
    string name_s, id_s;
    student_exam info1;             //** class object declared  **//

    cout << "\n\n\t\t********Using \"this\" keyword instead of a constructor********\n\n";
    cout << "Enter details:\n";
    cout << "Name: ";
    cin >> name_s;
    cout << "\nID: ";
    cin >> id_s;
    cout << "\nMks in sub1: ";
    cin >> n1;
    cout << "\nMks in sub2: ";
    cin >> n2;
    cout << "\nMks in sub3: ";
    cin >> n3;

    info1.getData(n1, n2, n3, name_s, id_s);          //passing values to "getData" function in class
    info1.display();

    return 1;

    /** Explanation for using "this" keyword instead of constructor.
     * 
     * 
     *  
    **/
}