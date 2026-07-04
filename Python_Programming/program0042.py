
#########################################################################################
## Application to write lambda function using filter() which accepts a list of strings & returns strings having length greater than 5
##
#########################################################################################
def main():
    Value = list()
    print("Enter number of elements")
    NoOfElements = int(input())

    for no in range(NoOfElements):
        print("Enter element number", no)
        Value.append(input())

    
    Length = list(filter(lambda a: len(a) > 5 , Value))
    
    print("Original List :",Value)
    print("Final List :",Length)
 
#########################################################################################
##
## Starter Function
##
#########################################################################################

if __name__ == "__main__":                 
    main()

#########################################################################################
##
## Original List : ['Suraj', 'Amitabh', 'Siddharth']
## Final List : ['Amitabh', 'Siddharth']
##
#########################################################################################]