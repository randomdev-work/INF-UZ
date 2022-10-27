#include <stdio.h>
#include <math.h>

int pierwszy()
{
    int wiek;
    char imie[20], nazwisko[20];

    fflush(stdin);

    printf("Podaj Imie: ");
    scanf("%s", imie);

    printf("Podaj Nazwisko: ");
    scanf("%s", nazwisko);

    printf("Podaj Wiek: ");
    if (scanf("%d", &wiek) == 1)
    {
        printf("\nWitaj %s %s! Masz %d lat.", imie, nazwisko, wiek);
        return 0;
    }
    else
    {
        printf("\nWprowadzono litery zamian cyfer.");
        return -1;
    }
}

int drugi()
{
    float a, b, c;
    int res_a, res_b, res_c;

    fflush(stdin);

    printf("Podaj A: ");
    res_a = scanf("%f", &a);

    if (res_a != 1)
    {
        printf("\nPodałes litere.");
        return -1;
    }

    printf("Podaj B: ");
    res_b = scanf("%f", &b);

    if (res_b != 1)
    {
        printf("\nPodałes litere.");
        return -1;
    }

    printf("Podaj C: ");
    res_c = scanf("%f", &c);

    if (res_c != 1)
    {
        printf("\nPodałes litere.");
        return -1;
    }

    if (a + b > c && a + c > b && b + c > a)
    {
        float p = (a + b + c) / 2;
        printf("\nPole trojkata wynosi: %f cm kwadratowych.", sqrt(p * (p - a) * (p - b) * (p - c)));
        return 0;
    }
    else
    {
        printf("\nTrójkąt nie jest prawdziwy.");
        return -1;
    }
}

int trzeci()
{
    float promien;

    fflush(stdin);

    printf("Podaj promien: ");
    scanf("%f", &promien);

    if (promien > 0)
    {
        printf("\nObwod kola wynosi %fπ.", (2 * promien));
        printf("\nPole kola wynosi %fπ.", (promien * promien));
        return 0;
    }
    else
    {
        printf("\nPromien nie moze byc negatywny");
        return -1;
    }
}

int czwarty()
{
    float liczba;

    fflush(stdin);

    printf("Podaj liczbe: ");
    if (scanf("%f", &liczba) == 1)
    {
        if (liczba < 0)
        {
            printf("\nLiczba bezwzgledna z liczby %f wynosi: %f.", liczba, (sqrt(liczba * liczba)));
        }
        else
        {
            printf("\nLiczba bezwzgledna z liczby %f wynosi: %f.", liczba, liczba);
        }
        return 0;
    }
    else
    {
        printf("\nWprowadzono litery zamiast cyfer.");
        return -1;
    }
}

int main()
{
    int result[4];
    int i = 0;

    printf("Zadanie 1\n\n");
    result[0] = pierwszy();

    printf("\n\nZadanie 2\n\n");
    result[1] = drugi();

    printf("\n\nZadanie 3\n\n");
    result[2] = trzeci();

    printf("\n\nZadanie 4\n\n");
    result[3] = czwarty();

    while (i < 4)
    {
        if (result[i] != 0)
        {
            printf("\n\nFunkcja %d została wykonana z niepowodzeniem.", i + 1);
            return -1;
        }
        i = i + 1;
    }

    printf("\n\n\nProgram został wykonany poprawnie.");

    return 0;
}
