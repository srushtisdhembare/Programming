#########################################################################################
##
##  Function name : ChkPerfect
##  Input         : int 
##  Output        : bool 
##  Description   : checks whether no is perfect no. or not
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def ChkPerfect(No):
    Sum = 0
    for no in range(1,No):
        if(No % no == 0):
            Sum = Sum + no      # Sum of Factors
  
    if (No == Sum):
        return True 
    else:
        return False
    
#########################################################################################
##
## Application that accepts a no. and checks whether it is perfect no. or not
##
#########################################################################################

def main():
    print("Enter number:")
    Value = int(input())

    Ret = ChkPerfect(Value)
    if(Ret):
        print("Number is Perfect")
    else:
        print("Number is Not Perfect")

#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 28
## Output : Number is Perfect 
##
#########################################################################################