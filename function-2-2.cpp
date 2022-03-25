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