/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to check whether a no. is perfect or not 
//
/////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program19
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.CheckPerfect(6);   
    }

}

class Logic
{
    void CheckPerfect(int N)
    {
        int iCnt = 0, iSum = 0;

        for(iCnt = 2; iCnt <= N ; iCnt++)
        {
            if(iCnt % N == 0)
            {
                iSum = iSum + iCnt;
            }
        } 
        if(iSum == N)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("It is not a Perfect Number");
        }
           
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Output : Perfect Number    
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 