#include<string.h>
#include<string>
#include<iostream>


using namespace std;

int maximum_sum(int *nums, int length);

int main()
{
   int old_array[10] = { 31,-41,59,26,-53,58,97,-93,-23,-84 };
  

   cout << "Largest sum is : " << maximum_sum(&old_array[0], 10) << endl;
return 0;
}

int maximum_sum(int *nums, int length)
{
   int i = 0, currentMax = 0, prevMax = 0;

   for (; i < length; i++)
   {
       if (nums[i] + currentMax > 0)
       {
           if (nums[i] < 0)
           {
               if (currentMax > prevMax)
                   prevMax = currentMax;

               currentMax += nums[i];
           }
           else
           {
               currentMax += nums[i];
           }
       }
       else
       {
           if(currentMax > prevMax)
               prevMax = currentMax;
           currentMax = 0;
       }      
   }

   if (prevMax > currentMax)
       return prevMax;

   return currentMax;
}