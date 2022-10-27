#include <stdio.h>
#include <math.h>

int is_year_leap(year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int pierwszy()
{
    int c;

    while((c = getchar()) != EOF)
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

    printf("Liczba %d podniesiona do potegi trzeciej wynosi %d.", liczba, (liczba*liczba*liczba));

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
    int i = 0;
    char hex_num[100];
    
    fflush(stdin);

    printf("\nWprowadz liczbe dziesietna: ");
    scanf("%d", &n);

    printf("Liczba %d w systemie szesnastkowymi wynosi: ", n);

    while (n != 0)
    {
        int temp = 0;
        temp = n % 16;
 
        if (temp < 10)
        {
            hex_num[i] = temp + 48;
        }
        else
        {
            hex_num[i] = temp + 55;
        }
        
        n = n / 16;
        i++;
    }
 
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex_num[j]);
    
    return 0;
}

int siodmy()
{

    int day, month,year;

    printf("\nPodaj dzien: ");
    scanf("%d", &day);

    printf("\nPodaj miesiac");
    scanf("%d", &month);    

    printf("\nPodaj rok: ");
    scanf("%d", &year);

    

    return 0;
}

int main()
{
    int result[4];
    int i = 0;

    printf("Zadanie 1\n\n");
    //result[0] = pierwszy();

    printf("\n\nZadanie 2\n\n");
    result[1] = drugi();

    printf("\n\nZadanie 3\n\n");
    result[2] = trzeci();

    printf("\n\nZadanie 4\n\n");
    result[3] = czwarty();

    szosty();

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
