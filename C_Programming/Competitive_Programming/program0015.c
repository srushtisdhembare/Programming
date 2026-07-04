//Accept one character from user and check whether that character is vowel (a,e,i,o,u) or not
// Input : E            Output : TRUE
// Input : d            Output : FALSE


#include<stdio.h>
#include<ctype.h>

typedef int bool;

#define TRUE 1
#define FALSE 0

bool CheckVowel(char CValue)        
{
   if(isupper(CValue)) 
   {
        CValue = tolower(CValue);
   }
  
   if(CValue == 'a' || CValue == 'e' ||CValue == 'i' ||CValue == 'o' ||CValue == 'u')
   {
     return TRUE;
   }
   else
   {
     return FALSE;
   }
}

int main()
{
    int cValue = 0;
    bool bRet = FALSE;
   
    printf("Enter character\n");
    scanf("%c",&cValue);

     bRet = CheckVowel(cValue);

     if(bRet)
     {
          printf("It is a vowel\n");
     }
     else
     {
          printf("It is not a vowel\n");
     }

    return 0;
}