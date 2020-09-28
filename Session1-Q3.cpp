/**
 * WAP to generate the random numbers in 
 * any specific range specified by the user. 
 * Ensure that for each run 
 * the numbers generated even in 
 * the same range are random 
 * and not same.
**/

#include <iostream>
//#include <stdlib.h>
#include <ctime>

//#include <Windows.h>
//#include <unistd.h>

using namespace std;

int main()
{
    int x, y;
    cout << "Enter starting range: ";
    cin >> x;
    cout << "Enter ending range: ";
    cin >> y;

    srand(time(NULL));          //generating seed for rand()
    cout << "Random number: ";
    cout << (rand() % (y + 1 - x) + 0) << endl;

    return 0;
}