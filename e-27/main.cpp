/*
Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers
*/

#include <iostream>
using namespace std;

int main()
{

    const int ARRAY_SIZE = 5; // size of array
    int numbers[ARRAY_SIZE];
    int negative = 0, posetive = 0; // default positive and negative number is 0

    // initialize array with number that come form user
    cout << "Input first number: ";
    cin >> numbers[0];
    cout << "Input second number: ";
    cin >> numbers[1];
    cout << "Input third number: ";
    cin >> numbers[2];
    cout << "Input fourth number: ";
    cin >> numbers[3];
    cout << "Input fifth number: ";
    cin >> numbers[4];

    // iterate array
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (numbers[i] >= 0)
        {
            // if number[i] is posetive
            posetive++;
        }
        else
        {
            // if nubmer[i] is negative
            negative++;
        }
    }

    // print posetive and negative
    cout << "Count of Positive: " << posetive << endl;
    cout << "Count of Negative: " << negative << endl;
    return 0;
}