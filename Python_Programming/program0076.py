import threading

def DisplayEven():
    print("The first 10 even numbers are : ")
    for i in range(2,21):
        if(i % 2 == 0):
            print(i, end = "\t")
    print()

def DisplayOdd():
    print("The first 10 odd numbers are : ")
    for i in range(1,21):
        if(i % 2 != 0):
            print(i, end = "\t")
    print()

def main():
    Even = threading.Thread(target = DisplayEven)
    Odd = threading.Thread(target = DisplayOdd)

    Even.start()
    Odd.start()

    Even.join()
    Odd.join()

    print("End of main")
    


if __name__ == "__main__":
    main()