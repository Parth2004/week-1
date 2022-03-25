#include<iostream>
#include<climits>
using namespace std;

int maximum_sum(int arr[], int size)
{
    //INT_MIN has limitation of -2147483648
    int maxFar = INT_MIN, maxEnd = 0;

    for (int i = 0; i < size; i++) //loop to the size of an array
    {
        maxEnd = maxEnd + arr[i]; //add the arry value to the maxEnd
        if (maxFar < maxEnd) //check if the maxFar < maxEnd
            maxFar = maxEnd; //set the maxFar to maxEnd

        if (maxEnd < 0) //chcek if the maxEnd < 0
            maxEnd = 0; //set the maxend to 0
    }
    return maxFar; //return maxFar
}

//main function
int main()
{
    int arr[] = {31,-41,59,26,-53,58,97,-93,-23,84}; //declare and initialize the array
    int n = sizeof(arr)/sizeof(arr[0]); //length of an array
    int maxSum = maximum_sum(arr, n); //call a function and return value into maxSum variable
    cout << maxSum; //prints the maxSum value
    return 0;
}