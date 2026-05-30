//Write a program which accepts one number from user and print even factors of that number
// INPUT : 24
// OUTPUT : 1 2 4 6 8 12

#include<stdio.h>

void DisplayEvenFactor(int iNo)        
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1; (i <= iNo/2) ; i++)
    {
        if(((iNo % i) == 0) && ((i % 2) == 0))
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;
   
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}