//Accept number from user and check whether number is even or odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int bool;

bool CheckEven(int iNo)         //return int
{
    if((iNo % 2) == 0)
    {
        return TRUE;            //returns 1
    }
    else
    {
        return FALSE;           //returns 0
    }
    
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;  //0

    printf("Enter number\n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet)
    {
        printf("Number is Even.\n");
    }
    else
    {
        printf("Number is Odd.\n");
    }

    return 0;
}