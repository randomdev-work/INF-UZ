tab = [9, 11, 2, 6 ,18, 37, 1, 42]
l = len(tab)

def sort_insert():
    print(tab)
    
    for i in range(0,len(tab)):
        for i in range(0,len(tab)):
            
            if tab[i+1] > tab[i]:
                
                temp = tab[i]
                tab[i] = tab[i+1]
                tab[i+1] = temp
    
    print(tab)
            
    return

def main():
    sort_insert()
    
    return

if __name__ == '__main__':
    main()