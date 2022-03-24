#include <iostream>

using namespace std;
int size_of_variable_star_arr(){
int a, *p;
p = &a;
int *t = new int;
int *arr = new int[3];

delete[] p;
return sizeof(arr);
  
}

int main()
{
  
cout<<size_of_variable_star_arr();

return 0;
}