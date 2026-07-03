/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to check whether no. is palindrome or not
//
/////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program16
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPalindrome(121);   
    }

}

class Logic
{
    void CheckPalindrome(int num)
    {
        int iDigit = 0, iRev = 0, iNo = num;

        while(num != 0)
        {
            iDigit = num % 10;  //1
            iRev = (iRev*10) +iDigit; //10
            num = num/10;    
        }

        if(iNo == iRev)
        {
            System.out.println("It is a palindrome");
        }
        else
        {
            System.out.println("It is not a palindrome");
        }
        
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Output : It is a palindrome
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 