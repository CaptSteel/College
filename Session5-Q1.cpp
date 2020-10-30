#include<iostream>
#include<string>

using namespace std;

class Student
{

    public:
        string name, id, division;
        string rollno;
        string m1, m2, m3;

        Student()
        {
            name = id = division = rollno = m1 = m2 = m3 = "Unknown";
        }

    /*
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
        */
        /*void average_marks()
        {
            std::cout << "Average marks: " << ((m1+m2+m3)/3) << std::endl;
        }*/
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

int main(int argc, char* argv[])
{
    Student obj1;
    Student obj2;
    //obj1.accept_details();
    if(argc > 1)
    {
        obj1.name = argv[1];
        obj1.id = argv[2];
        obj1.rollno = argv[3];
        obj1.division = argv[4];
        obj1.m1 = argv[5];
        obj1.m2 = argv[6];
        obj1.m3 = argv[7];

        obj2.name = argv[8];
        obj2.id = argv[9];
        obj2.rollno = argv[10];
        obj2.division = argv[11];
        obj2.m1 = argv[12];
        obj2.m2 = argv[13];
        obj2.m3 = argv[14];

        obj1.display_details();
        obj2.display_details();
    }
    //obj1.average_marks();
    return 0;
}