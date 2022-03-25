#include<iostream>
#include<climits>
using namespace std;

int maximum_sum(int arr[], int size);

//main function
int main()
{
   
    int arr[] = { 31, -41, 59, 26, -53, 58, 97, -93, -23, 84 }; //declare and initialize the array
    int n = sizeof(arr)/sizeof(arr[0]); //length of an array
    int maxSum = maximum_sum(arr, n); //call a function and return value into maxSum variable
    cout << maxSum; //prints the maxSum value
    return 0;
}