/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : CountSmall
//  Input         : char array
//  Output        : int
//  Description   : Use to accept string and calculate difference b/w freq of capital 
//                  and small letters
//  Date          : 7/10/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

int Difference(char *str)
{
   int iCntSmall = 0, iCntCapital = 0;

   while(*str != '\0')
   {
        if(*str >= 'a' && *str <= 'z')
        {
            iCntSmall++;
        }
        if(*str >= 'A' && *str <= 'Z')
        {
            iCntCapital++;
        }
        str++;
   }
   if((iCntSmall - iCntCapital) < 0)
   {
        return -(iCntSmall - iCntCapital);
   }
   else 
   {
        return iCntSmall - iCntCapital;
   }
     
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to to accept string and calculate difference b/w freq of capital 
// and small letters
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter string :\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Difference between frequency of capital and small letters is : %d\n",iRet);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input  : Enter string : Jay GanesH
// Output : Difference between frequency of capital and small letters is : 3
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

