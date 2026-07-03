/////////////////////////////////////////////////////////////////////////////////////////
//
// Application to display grade of student based on marks
//
/////////////////////////////////////////////////////////////////////////////////////////

import java.util.*;

class program18
{
    public static void main(String A[])
    {
        Logic lobj = new Logic();
        lobj.DisplayGrade(82);   
    }

}

class Logic
{
    void DisplayGrade(int num)
    {
        if(num > 85)
        {
            System.out.println("Grade : A");
        }
        else if(num > 70 && num <= 85)
        {
            System.out.println("Grade : B");
        }
        else if(num > 55 && num <= 70)
        {
            System.out.println("Grade : C");
        }
        else
        {
           System.out.println("Grade : F"); 
        }
        
        
    }
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// 
// Output : B
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 