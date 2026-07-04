/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Digits
//  Input         : array , int
//  Output        : void
//  Description   : display nos which contain 3 digits
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

void Digits(int Arr[] , int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iCount = 0, iNoCount=0 ;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iCount = 0;
        iDigit = 0;
        iNo = Arr[iCnt];

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        if(iCount == 3)
        {
            printf("%d\t",Arr[iCnt]);
        } 
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & display nos which contain 3 digits
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

    Digits(p,iSize);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6        Elements : 856   66  3   760  10  88
// Output :856  760
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 