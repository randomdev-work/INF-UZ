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


def bubble_sort(arr):
    n = len(arr)

    for i in range(n):
        print("Step %d\n" % (i+1))

        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                print("Swap %d and %d" % (arr[j], arr[j+1]))
                tab_print(j, (j+1), color.RED, color.GREEN)

                arr[j], arr[j+1] = arr[j+1], arr[j]

                tab_print(j, (j+1), color.GREEN, color.RED)
    return


def main():
    print("### BubleSort method ###\n")
    
    print("Unorted array")
    print(tab, "\n")
    
    bubble_sort(tab)
    
    print("Sorted array")
    print(tab, "\n")
    return


if __name__ == "__main__":
    main()
