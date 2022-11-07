#include <stdio.h>

int main()
{
    int sum = 0;
    int input = 0;

    while (sum < 10)
    {
        printf("Podaj liczbe: ");
        scanf("%d", &input);
        sum = sum + input;
    }
    printf("Suma przekroczyla 10.");
    
    int n = 100;
    printf("n(10) = %d, n(16)=", n);

    dec2hex(n);

    return 0;
}

int dec2hex(int n)
{
    if (n >= 16)
    {
        dec2hex(n / 16);
    }
    switch (n % 16)
    {
    case 0:
        printf("%d", n % 16);
        break;
    case 1:
        printf("%d", n % 16);
        break;
    case 2:
        printf("%d", n % 16);
        break;
    case 3:
        printf("%d", n % 16);
        break;
    case 4:
        printf("%d", n % 16);
        break;
    case 5:
        printf("%d", n % 16);
        break;
    case 6:
        printf("%d", n % 16);
        break;
    case 7:
        printf("%d", n % 16);
        break;
    case 8:
        printf("%d", n % 16);
        break;
    case 9:
        printf("%d", n % 16);
        break;
    case 10:
        printf("%c","a");
        break;
    case 11:
        printf("%c","b");
        break;
    case 12:
        printf("%c","c");
        break;
    case 13:
        printf("%c","d");
        break;
    case 14:
        printf("%c","e");
        break;
    case 15:
        printf("%c","f");
        break;

    default:
        printf("%s", "error!\n");
        break;
    }
}