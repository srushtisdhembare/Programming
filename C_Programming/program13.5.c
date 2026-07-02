/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Count
//  Input         : array , int
//  Output        : int
//  Description   : return frequency of no entered by user
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

int Count(int Arr[] , int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo )
        {
           iFreq++;  
        }
       
    }
    return iFreq;
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & accept another no as NO and return frequency of NO
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter number whose frequency you want to check :\n");
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

    iRet = Count(p,iSize, iValue);

    printf("Frequency is : %d\n",iRet);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6     NO: 66         Elements : 85 66  3   66  93  88
// Output : 2
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 