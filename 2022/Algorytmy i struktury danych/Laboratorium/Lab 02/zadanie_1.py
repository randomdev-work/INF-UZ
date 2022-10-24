def power(n, p):
    if n < 0: # If n is not natural
        return -1
    elif p == 0: # If power is 0
        return 1
    elif n == 0: # If n is 0
        return 0
    else:
        return (n*power(n, p-1))

def main():
    n = 3
    p = 3
    
    result = power(n, p)
    
    if result == -1:
        print("Liczba %d nie jest naturalna" % (n))
    else:
        print("Liczba %d podniesiona do potegi %d wynosi %d." % (n, p, result))
    
    return

if __name__ == '__main__':
    main()
