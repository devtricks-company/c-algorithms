/*
Write a C program that prints all even numbers between 1 and 50 (inclusive
*/

#include <iostream>
using namespace std;

int main()
{
    // loop from 1 to 50
    for (int i = 1; i <= 50; i++)
    {
        // check if the i is even
        if (i % 2 == 0)
        {
            cout << i << ", "; // print i
        }
    }
    return 0;
}