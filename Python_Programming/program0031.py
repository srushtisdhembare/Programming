#########################################################################################
##
##  Function name : CheckOdd
##  Input         : int 
##  Output        : bool
##  Description   : returns true is no. is odd and false if not
##  Date          : 24/07/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

CheckOdd = lambda no : True if (no % 2 != 0) else False 
    
#########################################################################################
##
## Application to write lambda function that returns true is no. is odd and false otherwise
##
#########################################################################################

def main():
    print("Enter first number:")
    Value = int(input())

    Result = CheckOdd(Value)
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