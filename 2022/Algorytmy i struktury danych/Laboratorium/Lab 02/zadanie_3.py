def pyramid(n):
    if n==0:
        return
    pyramid(n-1)
    print("*"*n)
 
def main():
    pyramid(15)
    
if __name__ == "__main__":
    main()