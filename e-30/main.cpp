/*
 Write a C program that accepts some integers from the user and find the highest value and the input position
*/

#include <iostream>
#include <array>
using namespace std;

int main()
{

    int max = 1;               // default max is 1;
    array<int, 5> arrayNumber; // define array for storing numbers come from user
    cout << "Input first number: ";
    cin >> arrayNumber[0];
    cout << "Input second number: ";
    cin >> arrayNumber[1];
    cout << "Input thrid number: ";
    cin >> arrayNumber[2];
    cout << "Input fourth number: ";
    cin >> arrayNumber[3];
    cout << "Input fifth number: ";
    cin >> arrayNumber[4];

    // iterate the arrayNumber
    for (int i = 0; i < 5; i++)
    {

        // if current item in array is grater than max
        if (arrayNumber[i] > max)
        {
            max = arrayNumber[i]; // it is assing to max
        }
    }
    // print max of them
    cout << "Max is: " << max << endl;
}