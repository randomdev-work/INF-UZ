import time

def fib_recursion(n):
    if n <= 1:
        return n
    
    return fib_recursion(n-1) + fib_recursion(n-2)
 
def fib_itterative(n):
    a = 0
    b = 1
    
    for i in range(0, n):
        a, b = b, a + b
        
    return a

def print_brake():
    print("\n--------------------------------------------------\n")
    
    return

def test(n):
    print("\nTest dla n=%d\n" % (n))

    print_brake()
    
    # Start time for iterative
    itt_start = time.time() 
    
    # Show result for iterative method
    print("Wynik dla funkcji iteracyjnej:", fib_itterative(n)) 
    
    # Calculate the time from the start
    itt_time = time.time() - itt_start 
    
    # Print time
    print("\nFunkcja licząca iteracyjnie dla n=%d zajmuje %f sekund." % (n, itt_time)) 

    print_brake()
    
    # Start time for recursive
    rec_start = time.time() 
    
    # Show result for recursive method
    print("Wynik dla funkcji rekurencyjnej:", fib_recursion(n)) 
    
    # Calculate the time from the start
    rec_time = time.time() - rec_start
    
    # Print time
    print("\nFunkcja liczącza rekurencyjnie dla n=%d zajmuje %f sekund." % (n, rec_time)) 
    
    print_brake()
    
    # Show better function for fibonacci numbers
    if rec_time > itt_time:
        print("Funkcja licząca iteracyjnie liczy szybciej.")
    else:
        print("Funkcja licząca rekurencyjnie liczy szybciej.")
    
    print_brake()
    
    return

def main():
    # Test n-times for generating Fibonnacci number up to standard maximum recursion depth
    for i in range(1,996):
        test(i)
    return
 
if __name__ == "__main__":
    main()