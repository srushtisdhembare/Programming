#########################################################################################
##
##  Function name : CheckVowel
##  Input         : str 
##  Output        : bool 
##  Description   : checks if character is a vowel
##  Date          : 29/06/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

def CheckVowel(ch):
    if(ch == 'a') or (ch == 'e') or (ch == 'i') or (ch == 'o') or (ch == 'u'):
        return True
    else:
        return False
    
#########################################################################################
##
## Application that accepts a char and checks if it is a vowel
##
#########################################################################################

def main():
    print("Enter character:")
    Char = input()
    
    Ret = CheckVowel(Char)

    if(Ret == True):
        print("It is a vowel")
    else:
        print("It is not a vowel")

#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Input : a
## Output : It is a vowel  
##
#########################################################################################