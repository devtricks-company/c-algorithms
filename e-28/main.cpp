/*
 Write a C program that read 5 numbers and counts the number of positive numbers and print the average of all positive values
*/

#include <iostream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 5; // size of array
    int numbers[ARRAY_SIZE];
    int sumPosetive = 0, positive = 0; // default positive  number is 0

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
            positive++;
            // sum positive numbers
            sumPosetive = sumPosetive + numbers[i];
        }
    }

    cout << "Count of  Positive Numbers: " << positive << endl; // print count of positve numbers

    // print avg of positive number
    cout << "The Avrage of Positive numbers is: " << (sumPosetive / positive) << endl;

    return 0;
}