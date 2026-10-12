#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;


#define TRUE 1
#define FALSE 0

// Application to check whether 15th bit is on or off

BOOL ChkBit(UINT iNo)
{
    int iMask = 0x1;
    int iAns = 0;

    iMask = iMask << 14;
    iAns = iNo & iMask;

    if(iAns == iMask)
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