/*
 Write a C program to find all numbers which are dividing by 7 and the remainder is equal to 2 or 3 between two given integer numbers.
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b; // variables for storing the range
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second Number: ";
    cin >> b;

    // iterate from a to b
    for (int i = a + 1; i < b; i++)
    {
        // print numbers that are divied by 7 and reminder 2 || 3
        if (i % 7 == 2 || i % 7 == 3)
        {
            cout << i << endl;
        }
    }
    return 0;
}