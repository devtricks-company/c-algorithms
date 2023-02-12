/*
Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Please enter n: ";
    cin >> n;

    for (int i = 1; i <= (5 * 3); i++)
    {
        cout << i << " ";
        if (i % 3 == 0)
        {
            cout << '\n';
        }
    }
    return 0;
}