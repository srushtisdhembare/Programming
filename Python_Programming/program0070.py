##################################################################################################
##
## Application which accepts N numbers from user & stores it into a list and pass it to a function from MarvellousNum module and return addition of prime nos
##
##################################################################################################
import MarvellousNum
from functools import reduce

def main():
    print("Enter no. of elements :")
    no = int(input())

    print("Enter the elements : ")
    Elements = list()

    for i in range(0,no):
        num = int(input())
        Elements.append(num)


    Prime = list(filter(MarvellousNum.ChkPrime, Elements))
    
    Ans = reduce(lambda x, y : x + y , Prime)

    print("Addition of prime nos from list is : ",Ans)

##################################################################################################
##
## Starter Function
##
##################################################################################################

if __name__ == "__main__":
    main()

##################################################################################################
## Input : Enter no. of elements :
## Input : 5
## Input : Enter the elements :
## 56
## 13
## 88
## 23
## 5
## Output : Addition of prime nos from list is :  41
##           
##################################################################################################