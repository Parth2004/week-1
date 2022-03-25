#include<string.h>
#include<string>
#include<iostream>

using namespace std;
void cpyda(double *old_array, double *new_array, int length);

int main()
{
   double *old_array = new double[5];//pointer for new array
   int i = 0;
   for (; i < 5; i++)
   {      
       old_array[i] = i + 1.1;
   }

   double *new_array = new double[5];  
   cpyda(old_array, new_array, 5);

return 0;
}

void cpyda(double *old_array, double *new_array, int length)
{
   int i = 0;
   for (; i < length; i++)
   {
       *(new_array + i) = *(old_array + i);
   }

   for (i = 0; i < length; i++)
   {
       cout << *(new_array + i) << endl;
   }
}