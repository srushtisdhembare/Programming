import threading
from MarvellousNum import ChkPrime, ChkNonPrime

def PrimeF(nums):
    Ans = list(filter(ChkPrime,nums))
    print("Prime numbers are : ")
    print(Ans)

def NonPrimeF(nums):
    Ans = list(filter(ChkNonPrime,nums))
    print("Non Prime numbers are : ")
    print(Ans)

def main():
    Num = int(input("Enter number of elements in the list : "))
    Elements = list()

    for i in range(Num):
        Value = int(input())
        Elements.append(Value)

    Thread1 = threading.Thread(target = PrimeF, args= (Elements,))
    Thread2 = threading.Thread(target = NonPrimeF, args= (Elements,))

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()