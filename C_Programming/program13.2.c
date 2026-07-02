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
//  Output        : int
//  Description   : return difference bw frequency of even & odd nos
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int Arr[] , int iLength)
{
    int iCnt = 0, iFreqEven = 0, iFreqOdd = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0 )
        {
           iFreqEven++;  
        }
        else
        {
            iFreqOdd++;
        }
       
    }
    return iFreqEven - iFreqOdd;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & return difference bw frequency of even & odd nos
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

    iRet = CountEven(p,iSize);

    printf("Result is : %d\n",iRet);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 7        Elements : 85   66  3   55  93  88  90
// Output : 1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 