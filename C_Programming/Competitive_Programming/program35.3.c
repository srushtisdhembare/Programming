#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

// Application to check whether 7th ,15th, 21st , 28th bit is on or off

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int iMask1 = 0x1, iMask2 = 0x1, iMask3 = 0x1, iMask4 = 0x1;
  
    int iAns1 = 0, iAns2 = 0, iAns3 = 0, iAns4 = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 14;
    iMask3 = iMask3 << 20;
    iMask4 = iMask4 << 27;

    iAns1 = iNo & iMask1;
    iAns2 = iNo & iMask2;
    iAns3 = iNo & iMask3;
    iAns4 = iNo & iMask4;

    if(iAns1 == iMask1 && iAns2 == iMask2 && iAns3 == iMask3 && iMask4 == iAns4)
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