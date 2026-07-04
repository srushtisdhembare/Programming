
#########################################################################################
## Application to write lambda function using filter() which accepts a list of nos & returns list of odd nos
##
#########################################################################################

def main():
    Value = list()
    print("Enter number of elements")
    NoOfElements = int(input())

    for no in range(NoOfElements):
        print("Enter element number", no)
        Value.append(int(input()))

    Odd = list(filter(lambda a : (a % 2 != 0) , Value))
    
    print("Original List :",Value)
    print("Final List :",Odd)
 
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
## Final List : [1, 3]
##
#########################################################################################