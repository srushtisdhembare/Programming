//Write a program which accepts radius of circle from user and calculates its area
//Consider value of PI as 3.14 (Area = PI*radius*radius)

//Input : 5.3
//Output :88.2026

//Input : 10.4
//Output :339.6224 

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
   return PI * fRadius * fRadius ;
}

int main()
{
     float fValue = 0.0f;
     double dRet = 0.0;
   
     printf("Enter radius :");
     scanf("%f",&fValue);

     dRet = CircleArea(fValue);
     printf("Area of circle is : %.4lf",dRet);

     return 0;
}