import threading

def Display():
    print("Elements from 1 to 50 in order : ")
    for i in range(1,51):
        print(end = "\t")
        print(i, end = "\t")
        
    print(end = "\n")

def DisplayReverse():
    print("Elements from 1 to 50 in reverse order : ")
    for i in range(50,0,-1):
        print(end = "\t")
        print(i, end = "\t")

    print(end = "\n")

def main():
    Thread1 = threading.Thread(target = Display)
    Thread2 = threading.Thread(target = DisplayReverse)

    Thread1.start()
    Thread2.start()

    Thread1.join()
    Thread2.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()