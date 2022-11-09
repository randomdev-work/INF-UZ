#include <stdio.h>

void zad1()
{
    int n, i = 0;

    printf("Podaj koncowy zakres: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
}

void zad2()
{
    int n, i = 0;

    printf("Podaj koncowy zakres: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }
}

void zad3()
{
    int loop = 1;

    while (loop == 1)
    {
        int a, b, i, suma = 0;
        char c;

        printf("Podaj lewy zakres: ");
        scanf("%d", &a);
        printf("Podaj prawy zakres: ");
        scanf("%d", &b);

        for (i = a; i <= b; i++)
            suma = suma + i;

        printf("Suma z liczb z przedziału <%d,%d> wynosi: %d.", a, b, suma);

        printf("\nCzy powtorzyc dzialanie programu? ");
        scanf("%s", &c);

        if (c == 84 || c == 116)
            return;
        else
            loop = 0;
    }
}

void zad4()
{
    int n, p, i = 0;
    int result = 1;

    printf("Podaj liczbe potegowana: ");
    scanf("%d", &n);

    printf("Podaj potege: ");
    scanf("%d", &p);

    if (p == 0)
        result = 1;
    else if (n == 0)
        result = 0;
    else if (p == 1)
        result = n;
    else
    {
        for (i = 0; i < p; i++)
        {
            result = result * n;
        }
    }
    printf("%d ^ %d = %d", n, p, result);
}

int main()
{
    int wybor;

    printf("Podaj numer zadania (1-4): ");
    scanf("%d", &wybor);

    switch (wybor)
    {
    case 1:
        zad1();
        break;
    case 2:
        zad2();
        break;
    case 3:
        zad3();
        break;
    case 4:
        zad4();
        break;
    default:
        printf("Nie ma takiego zadania");
        break;
    }
    printf("\n");
    return 0;
}