##################################################################################################
##
## Application where filter filters num that are even, map calculates square and reduce generates addition
##
##################################################################################################
from functools import reduce
def main():
    print("Enter number of elements in list :")
    no = int(input())

    print("Enter elements: ")
    Elements = list()

    for i in range(0,no):
        num = int(input())
        Elements.append(num)

    print(Elements)

    FFunction = list(filter(lambda x: x % 2 == 0, Elements))
    print("List after Filter : ",FFunction)

    MFunction = list(map(lambda x : x * x , FFunction))
    print("List after map : ",MFunction)

    RFunction = reduce(lambda x, y: x + y, MFunction)
    print("Output of reduce : ",RFunction)


##################################################################################################
##
## Starter Function
##
##################################################################################################

if __name__ == "__main__":
    main()

##################################################################################################
## Input : [5, 2, 3, 4, 3, 4, 1, 2, 8, 10]
## List after Filter :  [2, 4, 4, 2, 8, 10]
## List after map : [4, 16, 16, 4, 64, 100]
## Output of reduce :  204
##           
##################################################################################################