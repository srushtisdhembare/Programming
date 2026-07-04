
#########################################################################################
## Application to write lambda function using reduce() which accepts a list of nos & returns addition of all elements
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

    
    Add = reduce(lambda a ,b: a + b , Value)
    
    print("Original List :",Value)
    print("Final List :",Add)
 
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Original List : [1, 2, 3]
## Final List : 6
##
#########################################################################################]