#include<iostream>
#include<sstream>
#include<conio.h>

using namespace std;

//**    Input time in a hard way?         (っ◔◡◔)っ
class ClockTime
{
    private:
        int h, m, s;

    public:
        ClockTime()
        {
            h = m = s = 0;
        }

        void getDat()
        {
            cout << "Enter time:\n";
            cout << "\tHours: ";
            cin >> h;
            cout << "\tMinutes: ";
            cin >> m;
            cout << "\tSeconds: ";
            cin >> s;
        }

        void showDat()
        {
            cout << "\nTotal time: " << h << ":" << m << ":" << s << endl;
        }

        ClockTime operator + (const ClockTime& obj1)
        {
            ClockTime temp;
            temp.s = s + obj1.s;
            temp.m = m + obj1.m;
            temp.h = h + obj1.h;
            if(temp.s > 60)
            {
                temp.m = temp.m + (temp.s / 60);
                temp.s = temp.s % 60;
            }
            if(temp.m > 60)
            {
                temp.h = temp.h + (temp.m / 60);
                temp.m = temp.m % 60;
            }
            return temp;
        }
};

//**    Input time in an easy way?         (っ◔◡◔)っ
class NewClockTime
{
    private:
        string hh,mm,ss;
        int h, m, s;

    public:
        string input;
        NewClockTime()
        {
            input = hh = mm = ss = "";
            h = m = s = 0;
        }

        void extractTimeFromString(string bob)
        {
            std::istringstream tempStorage(bob);
            getline(tempStorage,hh,':');
            getline(tempStorage,mm,':');
            getline(tempStorage,ss);

            h = atoi(hh.c_str());
            m = atoi(mm.c_str());
            s = atoi(ss.c_str());
        }

        void getData()
        {
            cout << "Enter time in this format\n\thh:mm:ss: ";
            cin >> input;
        }

        void showData()
        {
            cout << "Final time: " << h << ":" << m << ":" << s << endl;
        }

        NewClockTime operator + (const NewClockTime& obj1)
        {
            NewClockTime temp;
            temp.s = s + obj1.s;
            temp.m = m + obj1.m;
            temp.h = h + obj1.h;
            if(temp.s > 60)
            {
                temp.m = temp.m + (temp.s / 60);
                temp.s = temp.s % 60;
            }
            if(temp.m > 60)
            {
                temp.h = temp.h + (temp.m / 60);
                temp.m = temp.m % 60;
            }
            return temp;
        }
};

int main()
{
    ClockTime in1, in2, out1;
    NewClockTime in3, in4, output;
    char ch;
    int choice;
    do
    {
        //cout << "\n\nWelcome to the time game. :D\n";
        cout << "Choose\n";
        cout << "1) Input time the hard way.\n";
        cout << "2) Input time the easy way.\n";
        cout << "Enter: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                in1.getDat();
                in2.getDat();
                out1 = in1 + in2;
                out1.showDat();
            break;

            case 2:
                in3.getData();
                in4.getData();
                in3.extractTimeFromString(in3.input);
                in4.extractTimeFromString(in4.input);
                output = in3 + in4;
                output.showData();
            break;

            default:
                cout << "\nUnknown command.\nExiting...";
                exit(0);
            break;
        }
        cout << "Press 'Y' to calculate time again. ";
        ch = getch();
    } while (ch == 'y' || ch == 'Y');

    return 0;
}