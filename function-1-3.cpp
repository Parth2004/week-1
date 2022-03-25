#include <iostream>

using namespace std;

// method

void cpyia(int old_array[], int new_array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        // accessing using pointer
        *(new_array + i) = *(old_array + i);
    }
}

int main()
{
    // declaring and initializing the array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // declaring another array
    int copy[10];

    // calling method
    cpyia(arr, copy, 10);

    // printing copy array
    for (int i = 0; i < 10; i++)

        cout << copy[i] << " ";
        cout << endl;

    return 0;
}