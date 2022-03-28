#include <iostream>
using namespace std;
int *readNumbers()
{
    int *num;          // declare the dynamic array
    num = new int[10]; // giving size to it1

    for (int i = 0; i < 5; i++) // taking the input from the user
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

int *reversrArray(int *numbers, int length){
    int *revArray; // creates the pointer called revArray
    int j = 0;
    revArray = new int[length]; // assign the size of the array dynamically

    for (int i = length - 1; i >= 0; i--) // for reversing the array
    {
        revArray[j++] = numbers[i];
    }
    return revArray; // retruns the reverse array
}

int main()
{
    int *arry1; // declare the array of pointer
    int *arry2;

    cout << "Enter the values for the first array" << endl
         << endl;
    arry1 = readNumbers();          // calling the function that return the pointer of array
    arry2 = reversrArray(arry1, 5); // calling the function that return the pointer of reversed array
    printNumbers(arry2, 5);

    return 0;
}
