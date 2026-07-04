
#########################################################################################
## Application to write lambda function using map() which accepts a list of nos and list of squares of each no.
##
#########################################################################################

def main():
    Value = list()
    print("Enter number of elements")
    NoOfElements = int(input())

    for no in range(NoOfElements):
        print("Enter element number", no)
        Value.append(int(input()))

#########################################################################################
##
##  Function name : Square
##  Input         : list
##  Output        : int
##  Description   : returns largest no.
##  Date          : 24/07/2026
##  Author        : Srushti Sachin Dhembare
##
#########################################################################################

    Square = list(map(lambda a : a * a , Value))
    
#########################################################################################
    print("Original List :",Value)
    print("Final List :",Square)
 
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
## Output :
##   Original List : [1, 2, 3]
##   Final List : [1, 4, 9]
## 
##
#########################################################################################