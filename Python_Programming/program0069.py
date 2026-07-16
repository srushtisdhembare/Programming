##################################################################################################
##
## Application which accepts N numbers from user & stores it into a list and accept another num and return its frequency
##
##################################################################################################
def main():
    print("Enter no. of elements :")
    no = int(input())

    print("Enter the elements : ")
    Elements = list()

    for i in range(0,no):
        num = int(input())
        Elements.append(num)

    Search = int(input("Enter element to search : "))

    Ans = list(filter(lambda x : x == Search , Elements))

    print("Frequency of number is : ",len(Ans))

##################################################################################################
##
## Starter Function
##
##################################################################################################

if __name__ == "__main__":
    main()

##################################################################################################
## Input : Number of elements : 6
## Input Elements : 11   5    4    5   67   34
## Input : Enter elements to search : 5
## Output : 2
##           
##################################################################################################