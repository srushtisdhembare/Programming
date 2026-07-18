import threading


def SmallF(String):
    count = 0
    for ch in String:
        if ch.islower():
            count = count + 1
    print("Number of small letters is : ",count)
    

def CapitalF(String):
    count = 0
    for ch in String:
        if ch.isupper():
            count = count + 1
    print("Number of capital letters is : ",count)

def DigitF(String):
    count = 0
    for ch in String:
        if ch.isdigit():
            count = count + 1
    print("Number of digits are : ",count)
    
    

def main():
    Str = input("Enter string : ")
    
    Small = threading.Thread(target = SmallF, args= (Str,))
    Capital = threading.Thread(target = CapitalF, args= (Str,))
    Digit = threading.Thread(target = DigitF, args= (Str,))

    Small.start()
    Capital.start()
    Digit.start()

    Small.join()
    Capital.join()
    Digit.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()