import threading
from functools import reduce

def Sum(nums,result1):
    Ans = reduce(lambda x,y : x + y, nums)
    result1.append(Ans);
    

def Product(nums, result2):
    Ans = reduce(lambda x,y : x * y, nums)
    result2.append(Ans);

def main():
    Num = int(input("Enter number of elements in the list : "))
    Elements = list()
    result1 = list()
    result2 = list()

    for i in range(Num):
        Value = int(input())
        Elements.append(Value)

    Thread1 = threading.Thread(target = Sum, args= (Elements,result1,))
    Thread2 = threading.Thread(target = Product, args= (Elements,result2,))

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Sum of elements : ", result1[0])
    print("Product of elements : ", result2[0])


    print("Exit from main")
    


if __name__ == "__main__":
    main()