#include <iostream>
#include <cstring>

using namespace std;

void copyArr(double *old_array, double *new_array, int length) {
// for loop to copy the array elements
for(int i=0; i<length; i++) {
// copy the current element
*(new_array + i) = *old_array;
// move the pointer to the next element
*old_array ++;
}
}

int main() {
int size = 10;
double *old_array = new double[size];
double *new_array = new double[size];
  
for(int i=0; i<size; i++) {
old_array[i] = i*i*i/10.0;
}
  
copyArr(old_array, new_array, size);
  
cout << "The new array elements are: " << endl;
for(int i=0; i<size; i++) {
cout << new_array[i] << " ";
}
}