tab = [9, 11, 2, 6, 18, 37, 1, 42]


class color:
    BLUE = '\033[94m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    END = '\033[0m'


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


def sort_choose(array, size):

    for step in range(size):
        index = step

        for i in range(step + 1, size):

            if array[i] < array[index]:
                index = i

        print("Step %d" % (step + 1))

        tab_print(step, index, color.RED, color.GREEN)
        (array[step], array[index]) = (array[index], array[step])
        tab_print(step, index, color.GREEN, color.RED)


def main():
    print("### Insertion Sort method ###\n")
    
    print("Unsorted array")
    print(tab, "\n")

    sort_choose(tab, len(tab))

    print('Sorted array')
    print(tab, "\n")

if __name__ == '__main__':
    main()
