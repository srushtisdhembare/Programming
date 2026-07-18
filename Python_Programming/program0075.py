##################################################################################################
##
## Application where filter filters prime numbers, map multiplies each no by 2 and reduce will return max num
##
##################################################################################################
from functools import reduce
import MarvellousNum

def main():
    print("Enter number of elements in list :")
    no = int(input())

    print("Enter elements: ")
    Elements = list()

    for i in range(0,no):
        num = int(input())
        Elements.append(num)

    print(Elements)

    FFunction = list(filter(MarvellousNum.ChkPrime, Elements))
    print("List after Filter : ",FFunction)

    MFunction = list(map(lambda x : x * 2 , FFunction))
    print("List after map : ",MFunction)


    RFunction = reduce(lambda x , y : x if x > y else y, MFunction)
    print("Output of reduce : ",RFunction)


##################################################################################################
##
## Starter Function
##
##################################################################################################

if __name__ == "__main__":
    main()

##################################################################################################
## Input : [2, 70, 11, 10, 17, 23, 31, 77]
## List after Filter :   [2, 11, 17, 23, 31]
## List after map : [4, 22, 34, 46, 62]
## Output of reduce :  62
##           
##################################################################################################
