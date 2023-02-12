/*
Write a C program that reads an integer between 1 and 12 and print the month of the year in English
*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Input Number: ";
    cin >> n; // store number in n

    // check the value of n for showing the appropriate months
    switch (n)
    {
    case 1:
        cout << "January\n";
        break;
    case 2:
        cout << "February\n";
        break;
    case 3:
        cout << "March\n";
        break;
    case 4:
        cout << "April\n";
        break;
    case 5:
        cout << "May\n";
        break;
    case 6:
        cout << "June\n";
        break;
    case 7:
        cout << "July\n";
        break;
    case 8:
        cout << "August\n";
        break;
    case 9:
        cout << "September\n";
        break;
    case 10:
        cout << "October\n";
        break;
    case 11:
        cout << "November\n";
        break;
    case 12:
        cout << "December\n";
        break;

    default:
        cout << "Number is not in Range";
        break;
    }

    return 0;
}
