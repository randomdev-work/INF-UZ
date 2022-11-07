tab = [9, 11, 2, 6, 18, 37, 1, 42]


class color:
    BLUE = "\033[94m"
    GREEN = "\033[92m"
    YELLOW = "\033[93m"
    RED = "\033[91m"
    BOLD = "\033[1m"
    UNDERLINE = "\033[4m"
    END = "\033[0m"


def tab_print(a, b, c_a, c_b):
    for g in range(len(tab)):
        if g == a:
            print("  " + c_a + str(tab[a]) + color.END, end="")
        elif g == b:
            print("  " + c_b + str(tab[b]) + color.END, end="")
        else:
            print("  " + str(tab[g]), end="")
    print("\n")
    return


def insert_sort(array):
    for step in range(1, len(array)):
        print("Step %d" % step)
        
        key = array[step]
        j = step - 1
        
        while j >= 0 and key < array[j]:
            if array[j] != array[j+1]:
                print("Insert %d to %d." % (array[j],array[j+1]))
                tab_print(j,(j+1), color.GREEN, color.RED)
            
            array[j + 1] = array[j]
            
            tab_print(j,(j+1), color.RED, color.GREEN)
            
            j = j - 1
            
        if key != array[j + 1]:
            print("Insert %d to %d." % (key, array[j + 1]))
            tab_print(step,(j+1), color.GREEN, color.RED)
            
        array[j + 1] = key
        
        if key != array[j + 1]:
            tab_print(step,(j+1), color.RED, color.GREEN)
            


def main():
    insert_sort(tab)
    return


if __name__ == "__main__":
    main()
