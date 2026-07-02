/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Dispaly
//  Input         : array , int
//  Output        : void
//  Description   : Display all elements in range given by user
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

void Display(int Arr[] , int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart)  &&    (Arr[iCnt] <= iEnd))
        {
           printf("%d\t",Arr[iCnt]);  
        }
       
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & accept range, Display all elements in that range
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    printf("Enter starting point :\n");
    scanf("%d",&iValue1);

    printf("Enter ending point :\n");
    scanf("%d",&iValue2);

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

    Display(p , iSize, iValue1, iValue2);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6     Start: 60            END:90         Elements : 85 66  3   76  93  88
// Output : 66 76 88
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 