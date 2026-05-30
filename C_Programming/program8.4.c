//Write a program which accepts temperature in Fahreinheit and convert to celsius
//1 degree celsius = (Fahreinheit -32)*(5/9)

//Input : 10
//Output :-12.2222   (10-32)*(5/9)

//Input : 34
//Output :1.11111    (34-32)*(5/9)

#include<stdio.h>

double FhtoCs(float fTemp)
{
   return ((fTemp-32)*(5.0/9.0));
}

int main()
{
     float fValue = 0.0f;
     double dRet = 0.0;
   
     printf("Enter temperature in Fahreinheit:");
     scanf("%f",&fValue);

     dRet = FhtoCs(fValue);
     printf("Temperature in celsius is : %lf",dRet);

     return 0;
}