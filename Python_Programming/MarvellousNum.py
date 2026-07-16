def ChkPrime(no):
    Count = 0
    for i in range(2,no):
        if(no % i == 0):
            Count = Count + 1
    if(Count == 0):
        return True
    else:
        return False