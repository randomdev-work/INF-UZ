
tab = [9, 11, 2, 6, 18, 37, 1, 42]


class color:
    BLUE = '\033[94m'
    GREEN = '\033[92m'
    YELLOW = '\033[93m'
    RED = '\033[91m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    END = '\033[0m'


def message(ar, st):
    if st:
        print("Posortowana tablica")
    else:
        print("Nieposortowana tablica")
    print(ar, "\n")
    return


def tab_print(t, a, b, c_a, c_b):
    for g in range(len(tab)):
        if g == a:
            print("  " + c_a + str(t[a]) + color.END, end="")
        elif g == b:
            print("  " + c_b + str(t[b]) + color.END, end="")
        else:
            print("  " + str(t[g]), end="")
    print("\n")
    return

# Zadanie 1


def insert_sort(array):
    message(array, False)

    for step in range(1, len(array)):
        print("Step %d" % step)

        print("Set key to %d" % array[step])
        tab_print(array, step, step+1, color.YELLOW, color.END)
        key = array[step]

        j = step - 1

        while j >= 0 and key < array[j]:
            if array[j+1] != array[j]:
                print("Put %d to %d" % (array[j], array[j+1]))
                tab_print(array, j+1, j, color.RED, color.END)

                array[j + 1] = array[j]

                tab_print(array, j+1, j, color.GREEN, color.END)

            j = j - 1

        if key != array[j + 1]:
            print("Put %d to %d" % (key, array[j + 1]))
            tab_print(array, j+1, step, color.RED, color.END)

            array[j + 1] = key

            tab_print(array, j+1, step, color.GREEN, color.END)

    message(array, True)

    return

# Zadanie 2


def sort_choose(array, size):

    message(array, False)

    for step in range(size):
        index = step

        for i in range(step + 1, size):

            if array[i] < array[index]:
                index = i

        if array[step] != array[index]:
            print("Step %d\n" % (step + 1))
            print("Swap %d with %d\n" % (array[step], array[index]))
            tab_print(array, step, index, color.RED, color.GREEN)

        (array[step], array[index]) = (array[index], array[step])

        if array[step] != array[index]:
            tab_print(array, step, index, color.GREEN, color.RED)

    message(array, True)
    return

# Zadanie 3


def bubble_sort(arr):

    message(arr, False)

    n = len(arr)

    for i in range(n):
        print("Step %d\n" % (i+1))

        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                print("Swap %d and %d" % (arr[j], arr[j+1]))
                tab_print(arr, j, (j+1), color.RED, color.GREEN)

                arr[j], arr[j+1] = arr[j+1], arr[j]

                tab_print(arr, j, (j+1), color.GREEN, color.RED)

    message(arr, True)

    return

# Zadanie 4


def part(array, low, high):
    pivot = array[high]
    i = low - 1

    for j in range(low, high):
        if array[j] <= pivot:
            i = i + 1

            if array[i] != array[j]:
                print("Swap %d and %d\n" % (array[i], array[j]))
                tab_print(array, i, j, color.RED, color.GREEN)

            (array[i], array[j]) = (array[j], array[i])

            if array[i] != array[j]:
                tab_print(array, i, j, color.GREEN, color.RED)

    if array[i + 1] != array[high]:
        print("Swap %d and %d\n" % (array[i + 1], array[high]))
        tab_print(array, (i + 1), high, color.RED, color.GREEN)

    (array[i + 1], array[high]) = (array[high], array[i + 1])

    if array[i + 1] != array[high]:
        tab_print(array, (i + 1), (high), color.GREEN, color.RED)

    return i + 1


def quick_sort(array, low, high):
    if low < high:
        pi = part(array, low, high)

        quick_sort(array, low, pi - 1)

        quick_sort(array, pi + 1, high)

    return


def main():
    tab = [9, 11, 2, 6, 18, 37, 1, 42]

    print("### Zadanie 1 - Sortowanie poprzez wstawianie ###\n")
    insert_sort(tab)

    tab = [9, 11, 2, 6, 18, 37, 1, 42]

    print("### Zadanie 2 - Sortowanie poprzez wybieranie ###\n")
    sort_choose(tab, len(tab))

    tab = [9, 11, 2, 6, 18, 37, 1, 42]

    print("### Zadanie 3 - Sortowanie bąbelkowe ###\n")
    bubble_sort(tab)

    tab = [9, 11, 2, 6, 18, 37, 1, 42]

    print("### Zadanie 4 - Sortowanie Quicksort ###\n")
    message(tab, False)

    quick_sort(tab, 0, (len(tab) - 1))

    message(tab, True)

    return


if __name__ == '__main__':
    main()
