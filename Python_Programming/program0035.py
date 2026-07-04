#########################################################################################
##
##  Function name : CheckLargest
##  Input         : int  int
##  Output        : int
##  Description   : returns largest no.
##  Date          : 24/07/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

CheckLargest = lambda no1, no2, no3 : no1 if (no1>no2 and no1>no3) else (no2 if (no2 > no1 and no2>no3) else no3)
    
#########################################################################################
##
## Application to write lambda function that accepts 3 nos and returns largest no.
##
#########################################################################################

def main():
    print("Enter first number:")
    Value1 = int(input())

    print("Enter second number:")
    Value2 = int(input())

    print("Enter third number:")
    Value3 = int(input())

    Result = CheckLargest(Value1, Value2, Value3)
    
    print("Largest no. :",Result)

    
    
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 5    2   8
## Output : 8
##
#########################################################################################