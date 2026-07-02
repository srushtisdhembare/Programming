/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Check
//  Input         : array , int
//  Output        : bool
//  Description   : check whether no entered by user is present or not
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0
typedef int BOOL;

int Check(int Arr[] , int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo )
        {
           return TRUE;  
        }
       
    }
    return FALSE;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & accept another no as NO and check whether it present or not
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 , bRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter number whose presence you want to check :\n");
    scanf("%d",&iValue);

    p =(int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element : %d\n",iCnt +1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize, iValue);

    if(bRet)
    {
        printf("Number is present.\n");
    }
    else
    {
        printf("Number is absent.\n");
    }

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6     NO: 66         Elements : 85 66  3   66  93  88
// Output : Number is Present
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 