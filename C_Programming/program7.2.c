/*Accept amount in US Dollar and return its corresponding value in Indian currency
Consider 1$ = 70/-
*/

//Input : 10
//Output :70

//Input : 3
//Output :210

//Input : 1200
//Output :84000 


#include<stdio.h>

int DollarToINR(int iNo)
{
   return iNo*70; 
}

int main()
{
     int iValue = 0;
     int iRet = 0;
   
     printf("Enter number :");
     scanf("%d",&iValue);

     iRet = DollarToINR(iValue);
     printf("Value in INR is : %d",iRet);

     return 0;
}