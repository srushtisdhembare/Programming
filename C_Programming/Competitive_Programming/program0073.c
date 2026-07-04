/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Difference
//  Input         : array , int
//  Output        : int
//  Description   : return difference bw the smallest no. and largest no.
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

int Difference(int Arr[] , int iLength)
{
    int iCnt = 0, iNo = 0, iMin = Arr[0] , iMax = 0 ;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin )
        {
            iMin = Arr[iCnt];
        }

        if(Arr[iCnt] > iMax )
        {
            iMax = Arr[iCnt];
        }
       
       
    }
    return iMax - iMin;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user &  return difference bw the smallest no. and largest no.
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0;
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

    iRet = Difference(p,iSize);

    printf("Difference is : %d\n",iRet);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6        Elements : 85   66  3   70  10  88
// Output : 90
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 