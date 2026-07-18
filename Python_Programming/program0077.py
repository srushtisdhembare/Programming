import threading

def DisplayEven(No):
    Sum = 0
    for i in range(1,No):
        if(No % i == 0  and i % 2 == 0):
            Sum = Sum + i
    print("Sum of even factors is : ",Sum)

def DisplayOdd(No):
    Sum = 0
    for i in range(1,No):
        if(No % i == 0 and i % 2 != 0):
            Sum = Sum + i
    print("Sum of odd factors is : ",Sum)

def main():
    Value = int(input("Enter a number : "))
    Even = threading.Thread(target = DisplayEven, args= (Value,))
    Odd = threading.Thread(target = DisplayOdd, args= (Value,))

    Even.start()
    Odd.start()

    Even.join()
    Odd.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()