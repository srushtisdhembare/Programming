//Write a program to find difference between even and odd factorial of given number

//Input : 5
//Output :-7  (8-15)

//Input : -5
//Output :-7   (8-15) 

//Input : 10
//Output :2895 (3840-945) 


#include<stdio.h>

int FactorialDiff(int iNo)
{
   if(iNo < 0)
   {
      iNo = - iNo;
   }
   int iCnt = 0 , iFacOdd = 1 , iFacEven = 1;

   for(iCnt = iNo ; iCnt > 0; iCnt--)
   {
      if(iCnt % 2 != 0)
      {
         iFacOdd = iFacOdd * iCnt;
      }
   }

   for(iCnt = iNo ; iCnt > 0; iCnt--)
   {
      if(iCnt % 2 == 0)
      {
         iFacEven = iFacEven * iCnt;
      }
   }
   return iFacEven - iFacOdd; 
}

int main()
{
     int iValue = 0;
     int iRet = 0;
   
     printf("Enter number :");
     scanf("%d",&iValue);

     iRet = FactorialDiff(iValue);
     printf("Factorial difference is : %d",iRet);

     return 0;
}