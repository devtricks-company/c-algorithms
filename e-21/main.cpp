/*
Write a C program that reads an integer and check the specified range where it belongs. Print an error message if the number is negative and greater than 80

*/

#include <iostream>
using namespace std;

int main()
{
    int a;
    cout << "Input an integer: ";
    cin >> a;

    if (a >= 0 && a <= 20)
    {
        cout << "Range[0-20]";
    }
    else if (a >= 21 && a <= 40)
    {
        cout << "Range[20-40]";
    }
    else if (a >= 41 && a <= 60)
    {
        cout << "Range[40-60]";
    }
    else if (a >= 61 && a <= 80)
    {
        cout << "Range[60-80]";
    }
    else

    {
        cout << "error: Integer that you give to system is not in range.";
    }
    return 0;
}