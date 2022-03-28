#include <iostream>
using namespace std;
int *readNumbers()
{
    int *num;          // declare the d1ynamic array
    num = new int[10]; // giving size to it

    for (int i = 0; i < 5; i++) // taking the input from the user
    {
        cout << "Enter the " << i + 1 << " th number :";
        cin >> num[i];
    }
    return num; // return the pointer of the array
}

bool equalsArray(int *numbers1, int *numbers2, int length)
{

    for (int i = 0; i < length; i++)
    {
        if (numbers1[i] != numbers2[i]) // if any of the number is not same then it will return the false
        {
            return false;
        }
    }
    return true; // other wiser it will return the true
}

int main(){

    int *arry1; // declare the array of pointer
    int *arry2;
    cout << "Enter the values for the first array" << endl
         << endl;

    arry1 = readNumbers(); // calling the function that return the pointer of array
    cout << "Enter the values for the second array" << endl
         << endl;

    arry2 = readNumbers(); // calling the function that return the pointer of array
    int a[5] = {1,2,1,2,1};
    if (equalsArray(a, a, 5)) // calling the equlas array funtion
        {
        cout << "\n\nBoth the array are same";
        }
    else
    {
        cout << "\n\nBoth the array are Not same" << endl;
    }
    return 0;
}