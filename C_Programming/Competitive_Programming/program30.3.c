/////////////////////////////////////////////////////////////////////////////////////////
//
//  Include required header files
//
/////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : char
//  Output        : void
//  Description   : Use to display characters till Z if capital and till a in reverse if small.
//  Date          : 29/09/2026
//  Author        : Srushti Sachin Dhembare
//
/////////////////////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
   if((ch >= 'a') && (ch <= 'z'))
   {
        while(ch != 'a')
        {
          printf("%c\t",ch);
          ch--;
        }

        printf("%c\n",ch);
   }
   else if((ch >= 'A') && (ch <= 'Z'))
   {
        while(ch != 'Z')
        {
          printf("%c\t",ch);
          ch++;
        }

        printf("%c\n",ch);
   }
   else 
   {
        printf("Invalid Input\n");
   }
     
}

/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to accept character from user. If it is capital then display all characters
// from i/p character till Z. If i/p char is small then print all characters in reverse 
// order till a. In other cases return directly.
//
/////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Input  : Q
// Output : Q       R       S       T       U       V       W       X       Y       Z
// Input  : m
// Output : m       l       k       j       i       h       g       f       e       d       c       b       a
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 

