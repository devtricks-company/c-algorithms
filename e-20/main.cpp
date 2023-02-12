/*
Write a C program to print the roots of Bhaskara’s formula from the given three floating numbers. Display a message if it is not possible to find the roots.

*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double a, b, c, x1, x2;
    cout << "Input the first number(a): ";
    cin >> a;
    cout << "Input the second number(b): ";
    cin >> b;
    cout << "Input the third  number(c): ";
    cin >> c;

    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    cout << "Root1: " << x1 << endl;
    cout << "Root2: " << x2 << endl;
    return 0;
}
