#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

// Application to check whether 5th and 18th bit is on or off

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int iMask1 = 0x1;
    int iMask2 = 0x1;
    int iAns1 = 0, iAns2 = 0;

    iMask1 = iMask1 << 4;
    iMask2 = iMask2 << 17;

    iAns1 = iNo & iMask1;
    iAns2 = iNo & iMask2;

    if(iAns1 == iMask1 && iAns2 == iMask2)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{   
    UINT iValue = 0;
    BOOL iRet = FALSE;

    printf("Enter number : \n");
    scanf("%u",&iValue);

    iRet = ChkBit(iValue);
    if(iRet)
    {
        printf("Bit is ON\n");
    }
    else
    {
        printf("Bit is OFF\n");
    }

    return 0;
}