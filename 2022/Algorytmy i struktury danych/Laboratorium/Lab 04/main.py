tab = [13, 1, 7, 6, 18, 37, 22, 34, 42, 55,
       3, 42, 1, 14, 16, 33, 37, 54, 1, 9]


def zad1():
    print("\nZadanie 1")


def zad2(array, m):
    l = len(array)

    if l <= m:
        print("Use quicksort.")
        return

    slice = (int)(l/m)

    blocks = [[0]*m]*slice
    
    i = 0
    j = 0
    
    for n in array:
        print(n)
        blocks[j][i]= n
        
        i = i + 1
        
        if i == m:
            i = 0
            if j != 3:
                j = j + 1
    
    for n in blocks:
        print(n)


zad2(array=tab, m=5)
