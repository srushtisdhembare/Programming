#########################################################################################
##
##  Function name : Multiplication
##  Input         : int  int
##  Output        : int
##  Description   : returns Multiplication
##  Date          : 24/07/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

Multiplication = lambda no1, no2 : no1 * no2 
    
#########################################################################################
##
## Application to write lambda function that accepts 2 nos and returns Multiplication
##
#########################################################################################

def main():
    print("Enter first number:")
    Value1 = int(input())

    print("Enter second number:")
    Value2 = int(input())

    Result = Multiplication(Value1, Value2)
    
    print("Multiplication :",Result)

    
    
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 5    2   
## Output : 10
##
#########################################################################################