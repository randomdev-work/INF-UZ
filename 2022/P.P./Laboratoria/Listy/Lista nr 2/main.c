#include <stdio.h>
#include <math.h>

int pierwszy()
{
    int wiek;
    char imie[20];
    char nazwisko[20];

    fflush(stdin);
    
    printf("Podaj Imie: ");
    scanf("%s", imie);

    printf("Podaj Nazwisko: ");
    scanf("%s", nazwisko);

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

    if (a+b > c) and (a+c >b) and (b+c >a)
    {

        double p = (a+b+c) / 2;

        double pole = abs(p *(p - a)*(p-b)*(p-c));

        printf("Pole trojkata wynosi: %f", pole);

    }
    else
    {
        printf("Trójkąt nie jest prawdziwy");
    }

    return 0;
}

int trzeci()
{
    double promien;
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
