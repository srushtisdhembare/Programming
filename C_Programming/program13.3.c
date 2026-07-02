/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountEven
//  Input         : array , int
//  Output        : bool
//  Description   : Checks whether the array contains 11 or not 
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[] , int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11 )
        {
           return TRUE;  
        }
         
    }
    return FALSE;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & Checks whether the nos contains 11 or not 
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 , bRet = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

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

    bRet = Check(p,iSize);

    if(bRet)
    {
        printf("11 is present.\n");
    }
    else
    {
        printf("11 is not present.\n");
    }

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 7        Elements : 85   66  3   11  93  88  90
// Output : 11 is present
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 