#########################################################################################
##
##  Function name : CheckDivisibleBy5
##  Input         : int 
##  Output        : bool
##  Description   : returns true is no. if no divisible by 5
##  Date          : 24/07/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

CheckDivisibleBy5 = lambda no : True if (no % 5 == 0) else False 
    
#########################################################################################
##
## Application to write lambda function that returns true is no. is divisible by 5
##
#########################################################################################

def main():
    print("Enter first number:")
    Value = int(input())

    Result = CheckDivisibleBy5(Value)
    if Result == True:
        print("True")
    else:
        print("False")

    
    
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 5    
## Output : True
##
#########################################################################################