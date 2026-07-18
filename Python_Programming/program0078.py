import threading
from functools import reduce

def EvenList(List):
    Even = list(filter(lambda x: x % 2 == 0, List))

    Sum = reduce(lambda x,y: x + y, Even)

    print("Sum of even elements of list is : ",Sum)

def OddList(List):
    Odd = list(filter(lambda x: x % 2 != 0, List))

    Sum = reduce(lambda x,y: x + y, Odd)

    print("Sum of odd elements of list is : ",Sum)
    

def main():
    Num = int(input("Enter number of elements in the list : "))
    Elements = list()

    for i in range(Num):
        Value = int(input())
        Elements.append(Value)

    Even = threading.Thread(target = EvenList, args= (Elements,))
    Odd = threading.Thread(target = OddList, args= (Elements,))

    Even.start()
    Odd.start()

    Even.join()
    Odd.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()