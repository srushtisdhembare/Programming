//Write a program which accepts range from user and displays all even numbers in that range

//Input : 25  35
//Output :24 26 28 30 32 34 

//Input : 10  18
//Output :10 12 14 16 18

//Input : 10  10
//Output :10

//Input : -10  2
//Output : -10 -8 -6 -4 -2 0  2

//Input : 90  18
//Output : Invalid Range

#include<stdio.h>

void RangeDisplay(int iStart , int iEnd)
{
   int iCnt = 0;

   if(iEnd < iStart)
   {
      printf("Invalid Range\n");
   }

   for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
   {
      if(iCnt % 2 == 0)
      {
         printf("%d\t",iCnt);
      }
   }
}

int main()
{
     int iValue1 = 0;
     int iValue2 = 0;
       
     printf("Enter starting point:");
     scanf("%d",&iValue1);

     printf("Enter ending point:");
     scanf("%d",&iValue2);

     RangeDisplay(iValue1 , iValue2);

     return 0;
}