/*
 Write a C program to read a password until it is correct. For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program. The correct password is 1234
*/

#include <iostream>
using namespace std;

int main()
{
    int password = 1234;

    while (true)
    {
        int getPassword;
        cout << "Please enter your password: ";
        cin >> getPassword;
        if (password == getPassword)
        {
            cout << "Correct password!" << endl;
            break;
        }
    }

    return 0;
}