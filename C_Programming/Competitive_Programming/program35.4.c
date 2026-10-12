#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

// Application to check whether 7th ,8th, 9th is on or off

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo)
{
    int iMask1 = 0x1, iMask2 = 0x1, iMask3 = 0x1;
  
    int iAns1 = 0, iAns2 = 0, iAns3 = 0;

    iMask1 = iMask1 << 6;
    iMask2 = iMask2 << 7;
    iMask3 = iMask3 << 8;
    

    iAns1 = iNo & iMask1;
    iAns2 = iNo & iMask2;
    iAns3 = iNo & iMask3;

    if(iAns1 == iMask1 && iAns2 == iMask2 && iAns3 == iMask3 )
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