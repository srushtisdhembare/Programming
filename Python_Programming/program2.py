#########################################################################################
##
##  Function name : ChkGreater
##  Input         : int , int
##  Output        : int
##  Description   : Checks which no. is greater and return that
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def ChkGreater(No1 , No2):
    if (No1 > No2):
        return No1
    else:
        return No2
    
#########################################################################################
##
## Application which contains 1 function ChkGreater() that accepts 2 nos & prints greater no
##
#########################################################################################

def main():
    print("Enter first number:")
    Value1 = int(input())

    print("Enter second number:")
    Value2 = int(input())

    Ret = ChkGreater(Value1 , Value2)

    print(Ret , " is greater")

#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":              
    main()

#########################################################################################
##
## Input : 10 20 
## Output : 20 is greater 
##
#########################################################################################