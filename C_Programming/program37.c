//Write a program which accepts width and height of rectangle from user and calculates its area
//Area = width * height

//Input : 5.3  9.78
//Output :51.834

#include<stdio.h>

double CircleRectangle(float fWidth , float fHeight)
{
   return fWidth * fHeight;
}

int main()
{
     float fValue1 = 0.0f ,fValue2 = 0.0f;
     double dRet = 0.0;
   
     printf("Enter width:");
     scanf("%f",&fValue1);

     printf("Enter height:");
     scanf("%f",&fValue2);

     dRet = CircleRectangle(fValue1 , fValue2);
     printf("Area of rectangle is : %.3lf",dRet);

     return 0;
}