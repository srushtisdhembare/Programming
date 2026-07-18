import threading
from functools import reduce

def Max(nums):
    Ans = reduce(lambda x,y : x if x > y else y ,nums)
    print("Maximum Element is : ",Ans)
    
def Min(nums):
    Ans = reduce(lambda x,y : x if x < y else y ,nums)
    print("Minimum Element is : ",Ans)

def main():
    Num = int(input("Enter number of elements in the list : "))
    Elements = list()

    for i in range(Num):
        Value = int(input())
        Elements.append(Value)

    Thread1 = threading.Thread(target = Max, args= (Elements,))
    Thread2 = threading.Thread(target = Min, args= (Elements,))

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()