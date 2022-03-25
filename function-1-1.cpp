#include <iostream>

using namespace std;

void copy_2d_strings(string first[][2], string second[][2], int n)
{
   for (int i = 0; i < n; i++)
   {
       second[i][0] = first[i][0];
       second[i][1] = first[i][1];
   }
   
}

int main()
{
   string a[3][2] = { {"1","2"},{"3","4"},{"5","6"} };
   string b[3][2];
   copy_2d_strings(a, b, 3);


   return 0;
}