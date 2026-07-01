#########################################################################################
##
##  Function name : Divisible
##  Input :         int 
##  Output :        bool
##  Description :   Checks whether no. is divisible by 3 & 5
##  Date :          29/06/2026
##  Author :        Srushti Sachin Dhembare
##
#########################################################################################

def Divisible(No):
    if ((No % 3 == 0) & (No % 5 == 0)):
        return True
    else:
        return False
    
#########################################################################################
##
## Application that accepts a no. and checks whether it is divisible by 3 & 5
##
#########################################################################################

def main():
    print("Enter number:")
    Value = int(input())

    Ret = Divisible(Value)

    if(Ret):
        print(Value ," is Divisible by both 3 and 5.")
    else:
        print(Value ," is Not Divisible by 3 and 5.")

#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 30
## Output : 30 is divisible by both 3 & 5
##
#########################################################################################