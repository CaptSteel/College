/**
 * WAP to implement any 5  funtions from string.
**/

#include <iostream>
#include <cstring>
#include <string.h>

using namespace std;

int main()
{
    string s1, s2;

    cout << "\nEnter string1: ";
    cin >> s1;
    cout << "Enter string2: ";
    cin >> s2;

    const char *string1 = s1.c_str();       //converting strings to character arrays
    const char *string2 = s2.c_str();

    char string3[20];
    

    cout << "\nLength of string1 is " << strlen(string1) <<endl;
    cout << "Length of string2 is " << strlen(string2) <<endl;

    cout << "Copied string from 'string1' to 'string3' is " << strcpy(string3,string1) << endl;

    cout <<"The concatenated string is "<< s1.append(s2) << endl;

    cout <<"The result of comparison of the strings 'string1' and 'string2' is "<< strcmp(string1,string2) << endl;

    cout << "The duplicated string is " << strdup(string1) << endl << endl;


}