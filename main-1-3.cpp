#include<string.h>
#include<string>
#include<iostream>


using namespace std;

void cpyia(int old_array[], int new_array[], int length);

int main()
{
   int old_array[5] = { 1,2,3,4,5 };
   int new_array[5];
  
   cpyia(old_array, new_array, 5);
return 0;
}

void cpyia(int old_array[], int new_array[], int length)
{
   int *oldA = old_array;
   int *newA = new_array;

   int i = 0;

   for (; i < length; i++)
   {
       *(newA + i) = *(oldA + i);
   }

   for (i = 0; i < length; i++)
   {
       cout << *(newA + i) << endl;
   }
}
