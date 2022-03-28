#include <iostream>
using namespace std;
int *readNumbers(){
    int *num; // declare the dynamic array
    num = new int[10]; // giving size to it
 
    for (int i = 0; i < 10; i++) // taking the input from the user
    {
        cout << "Enter the " << i + 1 << " th number :";
        cin >> num[i];
    }
    return num; // return the pointer of the array
}

void printNumbers(int *numbers, int length)

{
    cout << "Your array is :" << endl
         << endl;

    for (int i = 0; i < length; i++) // prints the array
    {
        cout << i << " " << numbers[i] << endl;
    }
}

void hexDigit(int *numbers, int length)

{
    cout << endl
         << endl;

    for (int i = 0; i < length; i++) // for loop repeates the length time

    {
        switch (numbers[i]) // switch case for the digits in the array called numbers
        {
        case 1:
            cout << i << " " << numbers[i] << " 1" << endl; // if it is 1 then pritns the 1
            break;
        case 2:
            cout << i << " " << numbers[i] << " 2" << endl;
            break;
        case 3:
            cout << i << " " << numbers[i] << " 3" << endl;
            break;
        case 4:
            cout << i << " " << numbers[i] << " 4" << endl;
            break;
        case 5:
            cout << i << " " << numbers[i] << " 5" << endl;
            break;
        case 6:
            cout << i << " " << numbers[i] << " 6" << endl;
            break;
        case 7:
            cout << i << " " << numbers[i] << " 7" << endl;
            break;
        case 8:
            cout << i << " " << numbers[i] << " 8" << endl;
            break;
        case 9:
            cout << i << " " << numbers[i] << " 9 " << endl;
            break;
        case 10:
            cout << i << " " << numbers[i] << " A" << endl; // if it is 10 then pritns the A
            break;
        case 11:
            cout << i << " " << numbers[i] << " B" << endl; // if it is 10 then pritns the B
            break;
        case 12:
            cout << i << " " << numbers[i] << " C" << endl; // if it is 10 then pritns the C
            break;
        case 13:
            cout << i << " " << numbers[i] << " D" << endl; // if it is 10 then pritns the D
            break;
        case 14:
            cout << i << " " << numbers[i] << " E" << endl; // if it is 10 then pritns the E
            break;
        case 15:
            cout << i << " " << numbers[i] << " F" << endl; // if it is 10 then pritns the F
            break;
        default:
            cout << i << " " << numbers[i] << " Not a HEX"; // IF IT IS NOT HEX NUMBER
            break;
        }
    }
}

#include<iostream>
using namespace std;
int *readNumbers();
void printNumbers(int *,int);
void hexDigit(int *, int);


int main(){
int *arry;//declare the array of pointer
arry=readNumbers();//calling the function that return the pointer of array
hexDigit(arry, 10);//calling the function for printing the array and its hex values
return 0;
}