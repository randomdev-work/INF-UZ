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


def part(array, low, high):
    pivot = array[high]
    i = low - 1

    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1

            if array[i] != array[j]:
                print("Swap %d and %d\n" % (array[i], array[j]))
                tab_print(i, j, color.RED, color.GREEN)

            (array[i], array[j]) = (array[j], array[i])

            if array[i] != array[j]:
                tab_print(i, j, color.GREEN, color.RED)

    if array[i + 1] != array[high]:
        print("Swap %d and %d\n" % (array[i + 1], array[high]))
        tab_print((i + 1), high, color.RED, color.GREEN)

    (array[i + 1], array[high]) = (array[high], array[i + 1])

    if array[i + 1] != array[high]:
        tab_print((i + 1), (high), color.GREEN, color.RED)

    return i + 1


def quick_sort(array, low, high):
    if low < high:
        pi = part(array, low, high)

        quick_sort(array, low, pi - 1)

        quick_sort(array, pi + 1, high)


def main():
    print("### QuickSort method ###\n")
    print("Unsorted array")
    print(tab, "\n")

    quick_sort(tab, 0, (len(tab) - 1))

    print('Sorted array')
    print(tab, "\n")

    return


if __name__ == '__main__':
    main()
