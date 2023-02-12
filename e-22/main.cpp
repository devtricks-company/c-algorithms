/*
Write a C program that read 5 numbers and sum of all odd values between them.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;       // hold the number that we get from user
    int sum = 0; // hold the sum

    for (int i = 1; i <= 5; i++) // repeat five time
    {
        cout << "Input an Integer: ";
        cin >> n;       // get number and put it on n in every itration of loop
        if (n % 2 != 0) // check if number is odd
        {
            sum = sum + n; // sum the odd number with perv sum
        }
    }

    cout << "the sum of odd is: " << sum << endl; // print the sum
}