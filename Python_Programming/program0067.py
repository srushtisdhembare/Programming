##################################################################################################
##
## Application which accepts N numbers from user & stores it into a list and return maximum no. from list
##
##################################################################################################
from functools import reduce
 
def main():
    print("Enter no. of elements :")
    no = int(input())

    print("Enter the elements : ")
    Elements = list()

    for i in range(0,no):
        num = int(input())
        Elements.append(num)

    Max = reduce(lambda x, y :x if x > y else y , Elements)

    print("Maximum number is : ",Max)

##################################################################################################
##
## Starter Function
##
##################################################################################################

if __name__ == "__main__":
    main()

##################################################################################################
## Input : Number of elements : 3
## Input Elements : 11   3    4
## Output : 11
##           
##################################################################################################