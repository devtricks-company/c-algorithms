/*
Write a C program that reads two integers and checks whether they are multiplied or not.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;

    cout << "Input first number: ";
    cin >> a; // get first number and store in a
    cout << "Input second number: ";
    cin >> b; // get second number and store in b

    // if a less than b you should change value of them
    if (a < b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    // check a and b are multiplied?
    if (a % b == 0)
    {
        cout << "Multiplied!" << endl; // print multiplied
    }
    else
    {
        cout << "Not Multiplied!" << endl; // print not multiplied
    }

    return 0;
}