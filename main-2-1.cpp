#include <iostream>
using namespace std;

//function passes the array and the length of array
void print_sevens(int *nums,int length){    
   for(int i= 0; i< length; i++){ //loop to the length  
       nums = nums + i; //add the nums to i
       if(*nums % 7 == 0)    //chcek if the divided by 7     
           cout << nums[i] << endl;   //prints nums   
      
   }
}

//main function
int main() {
   int arr[6]={14,23,27,21,29,24}; //declare and initialize array
   int *ptr = &arr[0];    //declare pointer variable *ptr and intitalize first array value of array arr
   int n = sizeof(arr)/sizeof(arr[0]);
   print_sevens(ptr,n);   //call the function
   return 0;
}