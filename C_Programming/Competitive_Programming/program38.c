//Write a program which accepts distance in kilometers and converts it to meter
//1 km = 1000m

//Input : 5
//Output :5000

//Input : 12
//Output :12000

#include<stdio.h>

int KMtoMeter(int iNo)
{
   return iNo * 1000;
}

int main()
{
     int iValue = 0;
     int iRet = 0.0;
   
     printf("Enter Distance:");
     scanf("%d",&iValue);

     iRet = KMtoMeter(iValue);
     printf("Distance in meter is : %d",iRet);

     return 0;
}