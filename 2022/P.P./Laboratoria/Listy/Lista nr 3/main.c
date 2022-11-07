#include <stdio.h>
#include <math.h>

int is_year_leap(year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int pierwszy()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    return 0;
}

int drugi()
{
    printf("DRUGA GUNKCJA");
    return 0;
}

int trzeci()
{
    int liczba;
    printf("podaj liczbe: ");
    scanf("%d", &liczba);

    printf("Liczba %d podniesiona do potegi trzeciej wynosi %d.", liczba, (liczba * liczba * liczba));

    return 0;
}

int czwarty()
{
    float a, b, c;

    fflush(stdin);

    printf("Podaj A: ");
    scanf("%f", &a);

    printf("Podaj B: ");
    scanf("%f", &b);

    printf("Podaj C: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        printf("\nTrojkat o wymiarach a-%f b-%f c-%f istnieje.", a, b, c);
        return 0;
    }

    printf("\nTrójkąt nie jest prawdziwy.");
    return -1;
}

int szosty()
{
    int n;

    fflush(stdin);

    printf("\nWprowadz liczbe dziesietna: ");
    scanf("%d", &n);

    printf("Liczba %d w systemie szesnastkowymi wynosi: %x ", n, n);

    return 0;
}

int month_n[] = {1, 3, 5, 7, 9, 11};
int month_nn[] = {4, 6, 8, 10, 12};

int siodmy()
{

    int day, month, year;

    while (day > 31 || day < 1)
    {
        printf("\nPodaj dzien: ");
        scanf("%d", &day);
    }
    /**/
    // 31
    // 28 lub 29
    // 31
    // 30
    // 31
    // 30
    // 31
    // 30
    // 31
    // 30
    // 31
    // 30
    //

    while (month > 12 || month < 1)
    {
        printf("\nPodaj miesiac: ");
        scanf("%d", &month);
    }

    while (year < 2022)
    {
        printf("\nPodaj rok: ");
        scanf("%d", &year);
    }

    if (month == 2 && day == 29 && is_year_leap(year) == 0)
    {
        print("Nie ma 29 dni w roku nie przestepnym");
        day = day - 1;
    }

    return 0;
}

int main()
{
    int result[4];
    int i = 0;

    // printf("Zadanie 1\n\n");
    // result[0] = pierwszy();

    // printf("\n\nZadanie 2\n\n");
    // result[1] = drugi();

    // printf("\n\nZadanie 3\n\n");
    // result[2] = trzeci();

    // printf("\n\nZadanie 4\n\n");
    // result[3] = czwarty();

    szosty();

    siodmy();
    return 0;
}
