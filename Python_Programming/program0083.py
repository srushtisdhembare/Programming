import threading

my_lock = threading.Lock()
no = 1

def fun1():
    my_lock.acquire()
    global no 
    no = no + 1
    print("From fun 1 , no : ",no)
    my_lock.release()

    
def fun2():
    my_lock.acquire()
    global no
    no = no - 1
    print("From fun 2 , no : ",no)
    my_lock.release()

def fun3():
    my_lock.acquire()
    global no
    no = no + 3
    print("From fun 3 , no : ",no)
    my_lock.release()

def main():
    count = 0

    Thread1 = threading.Thread(target = fun1)
    Thread2 = threading.Thread(target = fun2)
    Thread3 = threading.Thread(target = fun3)

    Thread1.start()
    Thread2.start()
    Thread3.start()

    Thread1.join()
    Thread2.join()
    Thread3.join()

    print("Exit from main")
    


if __name__ == "__main__":
    main()