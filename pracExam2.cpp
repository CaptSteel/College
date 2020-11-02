#include<iostream>

class Employee                                      //Base Class
{
    private: 
        std::string Emp_name, Emp_id;
    public:
        

        Employee(){}
        Employee(std::string n, std::string id)
        {
            Emp_name = n;
            Emp_id = id;
        }
};

class Personal_Details : public Employee            //Intermediate Class
{
    public:
        double salary; 
        int no_of_dependents;

        Personal_Details(){}
        Personal_Details(double s, int nd, std::string een, std::string eed):Employee(een, eed)
                                                    //Initializing base class constructor
        {
            salary = s;
            nd = no_of_dependents;
        }
};

class Dept_Details : public Personal_Details        //Child Class
{
    public:
        std::string project_id, dept_name;

        Dept_Details(){}
        Dept_Details(std::string pid, std::string dn, double a, int b, std::string en, std::string ed):Personal_Details(a,b,en,ed)
                                                    //Initializing intermediate class constructor
        {
            project_id = pid;
            dept_name = dn;
        }

        void display()
        {
            std::cout << "\n\n+-----+-----+-----+ Displaying Employee Data +-----+-----+-----+\n\n";
            std::cout << "Employee name:        " << Emp_name;
            std::cout << "\nEmployee ID:          " << Emp_id;
            std::cout << "\nEmployee salary:      " << salary;
            std::cout << "\nNumber of dependents: " << no_of_dependents;
            std::cout << "\nProject ID:           " << project_id;
            std::cout << "\nDepartment name:      " << dept_name;
            std::cout << "\n\n";
        }
};

int main()
{
    Dept_Details Employee1;
    //Initializing child class constructor.
    std::string a = "BLsXlrsX-2168";
    std::string b = "Department of Quantum Physics";
    double c = 600000;
    int d = 2;
    std::string e = "Stephen Hawking";
    std::string f = "Quebec-Quebec-D";
    Employee1(a,b,c,d,e,f);
    Employee1.display();

    return 0;
}