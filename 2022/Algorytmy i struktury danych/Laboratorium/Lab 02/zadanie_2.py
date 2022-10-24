def num_calc(n,m):
    if n > m:
        return
    elif n == 0:
        print("\n X od n=%d jest równe 1.\n"%(n))
    x =  + 1/n
    num_calc(n+1,m)

def main():
    m = 20
    n = 1
    
    num_calc(n,m)
    
    return

if __name__ == '__main__':
    main()
