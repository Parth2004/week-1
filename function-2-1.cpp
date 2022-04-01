#include <iostream>
using namespace std;

int *readNumbers(){
    int *month; // declare the dynamic array
    month = new int[10]; // giving size to it
 
    for (int i = 0; i < 10; i++) // taking the input from the user
    {
        cout << "Enter the " << i + 1 << " month:";
        cin >> month[i];
    }
    return month; // return the pointer of the array
}


string lookup_month(int month)
{

    for (int i = 0; i < month; i++) // for loop repeates the length time

    {
        switch (month) // switch case for the digits in the array called numbers
        {
        case 1:
            cout << i << " " << month << " jan" << endl; // if it is 1 then pritns the 1
            break;
        case 2:
            cout << i << " " << month << " Feb" << endl;
            break;
        case 3:
            cout << i << " " << month << " Mar" << endl;
            break;
        case 4:
            cout << i << " " << month << " Apr" << endl;
            break;
        case 5:
            cout << i << " " << month << " May" << endl;
            break;
        case 6:
            cout << i << " " << month << " jun" << endl;
            break;
        case 7:
            cout << i << " " << month << " Jul" << endl;
            break;
        case 8:
            cout << i << " " << month << " Aug" << endl;
            break;
        case 9:
            cout << i << " " << month << " Sep" << endl;
            break;
        case 10:
            cout << i << " " << month << " Oct" << endl;
            break;
        case 11:
            cout << i << " " << month << " Nov " << endl;
            break;
        case 12:
            cout << i << "" << month << "Dec" << endl;
        }

}
    }


