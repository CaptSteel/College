#include<iostream>
#include<string.h>


/*
Create a class Student having fields name, rollno, division, id and marks in 3 subjects.
The class also has three methods accept_details(),  average_marks() and display_details() 
as member procedures. Accept the details of two students as command line arguments 
and Display their information.
*/

using namespace std;

class Student
{
    string name, id, division;
    int rollno;
    int m1, m2, m3;

    public:
        void accept_details()
        {
            std::cout << "Enter details:\n";
            std::cout << "Name: ";              //name
            std::getline(std::cin, name);
            std::cout << "Roll no: ";           //rollno
            std::cin >> rollno;
            std::cout << "Division: ";          //division
            std::getline(std::cin, division);
            std::cout << "ID: ";                //id
            std::getline(std::cin, id);
            std::cout << "\nEnter marks:\n";
            std::cout << "Subject 1: ";
            std::cin >> m1;                     //m1
            std::cout << "Subject 2: ";
            std::cin >> m2;                     //m2
            std::cout << "Subject 3: ";
            std::cin >> m3;                     //m3
        }
        void average_marks()
        {
            std::cout << "Average marks: " << ((m1+m2+m3)/3) << std::endl;
        }
        void display_details()
        {
            std::cout << "\n\nName: " << name << std::endl;
            std::cout << "Roll No: " << rollno << std::endl;
            std::cout << "Division: " << division << std::endl;
            std::cout << "ID: " << id << std::endl;
            std::cout << "\nMarks\n";
            std::cout << "M1: " << m1 << std::endl;
            std::cout << "M2: " << m2 << std::endl;
            std::cout << "M3: " << m3 << std::endl;
        }
};

int main()
{
    Student obj1, obj2;
    obj1.accept_details();
    obj1.display_details();
    obj1.average_marks();
    return 0;
}