//Write a program which accepts range from user and displays addition all numbers in that range
//Range should contain positive nos only

//Input : 23   30
//Output :212 

//Input : 10  18
//Output :126

//Input : -10  2
//Output : Invalid Range

//Input : 90  18
//Output : Invalid Range

#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
   int iCnt = 0;
   int iSum = 0;

   if((iEnd < iStart) || (iStart < 0))
   {
      printf("Invalid Range\n");
   }

   for(iCnt = iStart; iCnt <= iEnd ; iCnt++)
   {
      iSum = iSum + iCnt ;   
   }

   return iSum;
}

int main()
{
     int iValue1 = 0;
     int iValue2 = 0;
     int iRet = 0;
       
     printf("Enter starting point:");
     scanf("%d",&iValue1);

     printf("Enter ending point:");
     scanf("%d",&iValue2);

     iRet = RangeSum(iValue1 , iValue2);

     printf("Addition is : %d", iRet);

     return 0;
}