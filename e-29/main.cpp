/*
Write a C program to find and print the square of each one of the even values from 1 to a specified value
*/

#include <iostream>
using namespace std;

int main()
{

    int n; // number of itration
    cout << "Input an Integer: ";
    cin >> n; // get from user and store in n

    // iterate from 1 to n
    for (int i = 1; i <= n; i++)
    {
        // check current iteration is even
        if (i % 2 == 0)
        {
            // print i^2
            cout << i << "^2: " << i * i << endl;
        }
    }

    return 0;
}