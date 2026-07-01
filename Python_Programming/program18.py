#########################################################################################
##
##  Function name : Addition
##  Input         : int 
##  Output        : int 
##  Description   : Performs Addition 
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def Addition(No1 , No2): return No1 + No2   
    
#########################################################################################
##
##  Function name : Subtraction
##  Input         : int 
##  Output        : int 
##  Description   : Performs Subtraction 
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def Subtraction(No1 , No2): return No1 - No2   
    #########################################################################################
##
##  Function name : Multiplication
##  Input         : int 
##  Output        : int 
##  Description   : Performs Multiplication 
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def Multiplication(No1 , No2): return No1 * No2   
    #########################################################################################
##
##  Function name : Division
##  Input         : int 
##  Output        : int 
##  Description   : Performs Division 
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def Division(No1 , No2): return No1 / No2   
    
#########################################################################################
##
## Application that accepts a no. and Prints Addition , Subtraction, Multiplication & Division of the no.
##
#########################################################################################

def main():
    print("Enter first number:")
    Value1 = int(input())

    print("Enter second number:")
    Value2 = int(input())
    
    RAdd = Addition(Value1 , Value2)
    print("Addititon is :",RAdd)

    RSub = Subtraction(Value1 , Value2)
    print("Subtraction is :",RSub)

    RMul = Multiplication(Value1 , Value2)
    print("Multiplication  is :",RMul)

    RDiv = Division(Value1 , Value2)
    print("Division is :",RDiv)

#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 15   3
## Output : Addition = 18    Subtraction = 12    Multiplication = 45    Division = 5   
##
#########################################################################################