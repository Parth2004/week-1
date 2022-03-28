
#include<iostream>
using namespace std;

int *readNumbers();
void printNumbers(int *,int);
void hexDigit(int *, int);
bool equalsArray(int *,int *,int);

int main(){


    int *arry1; // declare the array of pointer
    int *arry2;
    cout << "Enter the values for the first array" << endl
         << endl;

    arry1 = readNumbers(); // calling the function that return the pointer of array
    cout << "Enter the values for the second array" << endl
         << endl;

    arry2 = readNumbers(); // calling the function that return the pointer of array

    if (equalsArray(arry1, arry2, 10)) // calling the equlas array funtion
        {
        cout << "\n\nBoth the array are same";
        }
    else
    {
        cout << "\n\nBoth the array are Not same" << endl;
    }
    return 0;
}