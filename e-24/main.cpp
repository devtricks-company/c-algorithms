/*
Write a C program that reads two integers and checks whether they are multiplied or not.
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, max;

    cout << "Input first number: ";
    cin >> a;
    cout << "Input second number: ";
    cin >> b;

    if (a < b)
    {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    if (a % b == 0)
    {
        cout << "Multiplied!" << endl;
    }
    else
    {
        cout << "Not Multiplied!" << endl;
    }

    return 0;
}