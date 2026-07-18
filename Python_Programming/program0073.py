##################################################################################################
##
## Application where filter filters num between 70 and 90 , map increases each num by 10 and reduce generates product
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

    FFunction = list(filter(lambda x: x >= 70 and x <= 90 , Elements))
    print("List after Filter : ",FFunction)

    MFunction = list(map(lambda x : x + 10 , FFunction))
    print("List after map : ",MFunction)

    RFunction = reduce(lambda x, y: x * y, MFunction)
    print("Output of reduce : ",RFunction)


##################################################################################################
##
## Starter Function
##
##################################################################################################

if __name__ == "__main__":
    main()

##################################################################################################
## Input : [4, 34, 36, 76, 68, 24, 89, 23, 86, 90, 45, 70]
## List after Filter :  [76, 89, 86, 90, 70]
## List after map :  [86, 99, 96, 100, 80]
## Output of reduce :  6538752000
##           
##################################################################################################