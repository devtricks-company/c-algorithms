/*
Write a C program that reads three floating values and check if it is possible to make a triangle with them. Also calculate the perimeter of the triangle if the said values are valid.
*/

#include <iostream>
using namespace std;

int main()
{
    float a, b, c, perimeter; // numbers for storing the length of side of triangel
    cout << "Input the first number: ";
    cin >> a; // get first number
    cout << "Input the second number: ";
    cin >> b; // get second number
    cout << "Input the third number: ";
    cin >> c; // get third number

    // check sum of two side must be grater than on side
    if (a + b > c || a + c > b || c + b > a)
    {
        perimeter = a + b + c; // calc perimeter
        cout << "Perimeter is: " << perimeter << endl;
    }
    else
    {
        cout << "the numbers is not valid." << endl; // it is not triangle
    }
    return 0;
}