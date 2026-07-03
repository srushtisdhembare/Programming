/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to find sum of even and odd digits of a number
//
/////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program17
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.SumOfEvenOddDigits(123456);   
    }

}

class Logic
{
    void SumOfEvenOddDigits(int num)
    {
        int iDigit = 0, iSumEven = 0, iSumOdd = 0, iDiff = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            if((iDigit % 2) == 0)
            {
                iSumEven = iSumEven + iDigit;
            }
            else
            {
                iSumOdd = iSumOdd + iDigit;
            }
            num = num /10;
        }
        iDiff = iSumEven - iSumOdd;
        System.out.println("Difference of sum of even & odd Digits:"+ iDiff);
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Output :Difference of sum of even & odd Digits:3
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 