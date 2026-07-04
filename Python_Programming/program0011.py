#########################################################################################
##
##  Function name : CheckPrime
##  Input         : int 
##  Output        : bool 
##  Description   : Checks whether no. is prime is not
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def CheckPrime(No):
    for no in range(2,No):
        if(No % no == 0):
            return False
        else:
            return True
            
    
#########################################################################################
##
## Application that accepts a no. and Checks whether no. is prime is not
##
#########################################################################################

def main():
    print("Enter number:")
    Value = int(input())
    
    Ret = CheckPrime(Value)

    if(Ret):
        print("Number is Prime")
    else:
        print("Number is Not Prime")


#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 11
## Output : Number is Prime   
##
#########################################################################################