/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to count how many even & odd nos are present bw 1 & N 
//
/////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program20
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CountEvenOdd(50);   
    }

}

class Logic
{
    void CountEvenOdd(int num)
    {
        int iCnt = 0,iCountEven = 0, iCountOdd = 0;
        
        for(iCnt = 1; iCnt <= num; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iCountEven++;
            }
            else
            {
                iCountOdd++;
            }
        }
        System.out.println("No. of Even Elements : "+iCountEven+" and No. of Odd Elements : "+iCountOdd);
           
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Output : No. of Even Elements : 25 and No. of Odd Elements : 25   
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 