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
//  Output        : index
//  Description   : return index of 1st occurence of the no entered by user
//  Date          : 02/07/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

int Check(int Arr[] , int iLength, int iNo)
{
    int iCnt = 0, iFreq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt]== iNo )
        {
           return iCnt;  
        }
       
    }
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to Accept N numbers from user & accept another no as NO and return index of 1st occurence of that no
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize = 0, iCnt = 0 , iRet = 0, iValue = 0;
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

    iRet = Check(p,iSize, iValue);

    printf("Index of the entered no. is : %d\n",iRet);

    free(p);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input : N : 6     NO: 66         Elements : 85 66  3   66  93  88
// Output : 1
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 