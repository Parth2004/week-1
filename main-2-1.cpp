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