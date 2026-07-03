//Write a program which accepts area in sq feet and convert it into sq meter
//1 sq feet = 0.00929 sq meter

//Input : 5
//Output :0.464515

//Input : 7
//Output :0.650321

#include<stdio.h>

double SquareMeter(int iNo)
{
   return iNo * 0.00929;
}

int main()
{
     int iValue = 0;
     double dRet = 0.0;
   
     printf("Enter area in square feet:");
     scanf("%d",&iValue);

     dRet = SquareMeter(iValue);
     printf("Area in square meter is : %lf",dRet);

     return 0;
}