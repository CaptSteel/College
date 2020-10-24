#include<iostream>

using namespace std;

class publication
{
    public:
        string bktitle;
        double price;

    void getdata()
    {
        cout << "Enter title of book: ";
        getline(cin, bktitle);
        cout << "Enter price of book: ";
        cin >> price;
    }

    void display()
    {
        cout << "\nTitle of book: " << bktitle << endl;
        cout << "Price: " << price << endl;
    }
};

class Book : public publication
{
    public:
        int pgCount;

        void getdata()
        {
            cout << "Enter page count: ";
            cin >> pgCount;
        }

        void display()
        {
            cout << "Number of pages: " << pgCount << endl;
        }
};

class Video : public publication
{
    public:
        int vidSize;

        void getdata()
        {
            cout << "Enter size of video file in MBs: ";
            cin >> vidSize;
        }

        void display()
        {
            cout << "Size of video file: " << vidSize << endl;
        }
};

int main()
{
    Book b1;
    Video v1;

    //taking inputs

    b1.publication::getdata();
    b1.getdata();
    v1.getdata();

    //printing output

    b1.publication::display();
    b1.display();
    v1.display();

    return 0;
}