#include <iostream>
using namespace std;

int *readNumbers()
{
    int *num;          // declare the dynamic array
    num = new int[10]; // giving size to it

    for (int i = 0; i < 10; i++) // taking the input from the user
    {
        cout << "Enter" << i + 1 << " th number :";
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

#include<iostream>
using namespace std;

int main(){
int *arry;//declare the array of pointer
arry=readNumbers();//calling the function that return the pointer of array
printNumbers(arry,10);//calling the function for printing the array

return 0;
}