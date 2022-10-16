#include <stdio.h>
#include <conio.h>
#include <math.h>

int pierwszy()
{
    int wiek;
    char imie[20];
    char nazwisko[20];
    fflush(stdin);
    printf("Podaj Imie: ");
    scanf("%s", &imie);

    printf("Podaj Nazwisko: ");
    scanf("%s", &nazwisko);

    printf("Podaj Wiek: ");
    scanf("%d", &wiek);

    printf("\nWitaj %s %s! Masz %d lat.", imie, nazwisko, wiek);

    return 0;
}

int drugi()
{
    int a, b, c;
    fflush(stdin);
    printf("Podaj A: ");
    scanf("%d", &a);

    printf("Podaj B: ");
    scanf("%d", &b);

    printf("Podaj C: ");
    scanf("%d", &c);

    if(a + b > c & a + c > b & b + c >a)
    {
        if (a == b & a == c & b == c)
        {

        }
        else
        {
            int p = (a+b+c)/2;

            float pole = p*((p-a)*(p-b)*(p-c));

            printf("Pole trojkata wynosi: %.2f cm kwadratowych.", sqrt(pole));

        }

        return 0;
    }
    else
    {
        printf("Trojkat jest niepoprawny");
        return 1;
    }


}

int trzeci()
{
    printf("\n");
    return 0;
}

int czwarty()
{
    printf("\n ");
    return 0;
}

int main()
{
    printf("Zadanie 1\n\n");
    pierwszy();

    printf("\n\nZadanie 2\n\n");
    drugi();

    printf("\n\nZadanie 3\n\n");
    trzeci();

    printf("\n\nZadanie 4\n\n");
    trzeci();

    return 0;
}
