#include<string.h>
#include<string>
#include<iostream>


using namespace std;



void copy_2d_strings(string first[][2], string second[][2], int n)
{
   int i = 0;

   for (; i < n; i++)
   {
       second[i][0] = first[i][0];
       second[i][1] = first[i][1];
   }

   for (i=0; i < n; i++)
   {
       cout << "First: " << second[i][0] << " Second : " << second[i][1] << endl;
   }
}