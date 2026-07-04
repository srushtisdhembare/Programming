
#########################################################################################
## Application to write lambda function using filter() which accepts a list of nos & returns list of nos divisible by 3 & 5
##
#########################################################################################
from functools import reduce

def main():
    Value = list()
    print("Enter number of elements")
    NoOfElements = int(input())

    for no in range(NoOfElements):
        print("Enter element number", no)
        Value.append(int(input()))

    
    Result = list(filter(lambda a : (a % 3 == 0) and (a % 5 == 0) , Value))
    
    print("Original List :",Value)
    print("Final List :",Result)
 
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Original List : [15 , 5, 4]
## Final List : 15
##
#########################################################################################]