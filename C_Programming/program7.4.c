//Write a program to find odd factorial of given number

//Input : 5
//Output :15 (5*3*1)

//Input : -5
//Output :5 (5*3*1)

//Input : 10
//Output :945 (9*7*5*3*1) 


#include<stdio.h>

int OddFactorial(int iNo)
{
   if(iNo < 0)
   {
      iNo = - iNo;
   }
   int iCnt = 0 , iFac = 1;
   for(iCnt = iNo ; iCnt > 0; iCnt--)
   {
      if(iCnt % 2 != 0)
      {
         iFac = iFac * iCnt;
      }
   }
   return iFac; 
}

int main()
{
     int iValue = 0;
     int iRet = 0;
   
     printf("Enter number :");
     scanf("%d",&iValue);

     iRet = OddFactorial(iValue);
     printf("Odd factorial of the number : %d",iRet);

     return 0;
}