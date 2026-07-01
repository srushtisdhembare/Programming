#########################################################################################
##
##  Function name : ChkPalindrome
##  Input         : int 
##  Output        : bool
##  Description   : Checks whether no. is palindrome or not
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def ChkPalindrome(No):
    Digit = 0
    No2 = 0
    No1 = No
    
    while(No != 0):
        No2 = No2*10
        Digit = No % 10         
        No = int(No/10)         
        No2 = No2 + Digit      
                   
    if(No1 == No2):
        return True
    else:
        return False  
    
#########################################################################################
##
## Application that accepts a no. and Checks whether no. is palindrome or not
##
#########################################################################################

def main():
    print("Enter number:")
    Value = int(input())
    
    Ret = ChkPalindrome(Value)

    if(Ret == True):
        print("Palindrome")
    else:
        print("Not Palindrome")

#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : 121
## Output : Palindrome  
##
#########################################################################################