//Write a program which accepts range from user and dcheck whether it contains zero or not 

/*
Input : 2395
 Output : There is no zero

Input : 1018
Output : It contains zero

Input : 90000
Output : It contains zero

*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
   int iDigit = 0;
   int iRev = 0;

   if(iNo < 0)
   {
      iNo = -iNo;
   }

   while(iNo > 0)
   {
      iDigit = iNo % 10;
      if(iDigit == 0)
      {
         return TRUE;
      }
      iNo = iNo / 10;
   }
   return FALSE;
}

int main()
{
     int iValue = 0;
     BOOL bRet = FALSE;
            
     printf("Enter number:\n");
     scanf("%d",&iValue);

     bRet = CheckZero(iValue);

     if(bRet)
     {
         printf("It contains zero.\n");
     }
     else
     {
         printf("It does not contain zero.\n");
     }

     return 0;
}