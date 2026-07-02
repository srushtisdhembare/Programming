/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : DigitsSum
//  Input         : array , int
//  Output        : void
//  Description   : display sum of digits of each no.
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[] , int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iSum = 0;
        iDigit = 0;
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        printf("%d\t",iSum);
         
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & display sum of digits of each no.
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 ;
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

    DigitsSum(p,iSize);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 3       Elements : 856   66  3 
// Output :19   12  3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 