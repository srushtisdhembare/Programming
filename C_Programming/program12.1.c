/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : array , int
//  Output        : int
//  Description   : return  Difference between summation of even and odd elements
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////
int Difference(int Arr[] , int iLength)
{
    int iCnt = 0 , iSumEven = 0, iSumOdd = 0, iResult = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            printf("in for if condition %d\n",Arr[iCnt]);
            iSumEven = iSumEven + Arr[iCnt];
            printf("iSumEven = %d\n",iSumEven);
        }
        else 
        {
            printf("in for else condition %d\n",Arr[iCnt]);
            iSumOdd = iSumOdd + Arr[iCnt];
            printf(" iSumOdd = %d\n",iSumOdd);
        }
    }

    iResult = (iSumEven - iSumOdd);
    return iResult;

}
/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user &Difference between summation of even and odd elements
//
/////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
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

    printf("Result is : %d\n", iRet);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6        Elements : 85   66  3   80  93  88
// Output : 53 (234-181)
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 