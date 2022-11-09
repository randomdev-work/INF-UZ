#include <stdio.h>

void zad1()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 3\n");
}
void zad2()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 4\n");
}
void zad3()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 5\n");
}
void zad4()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 6\n");
}
void zad5()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 7\n");
}
void zad6()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 8\n");
}
void zad7()
{
    printf("\nZadanie zrobione w liscie nr 3 zad 9\n");
}

int main()
{
    int wybor;

    printf("Podaj numer zadania (1-7): ");
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
    case 5:
        zad5();
        break;
    case 6:
        zad6();
        break;
    case 7:
        zad7();
        break;
    default:
        printf("Nie ma takiego zadania");
        break;
    }
    printf("\n");
    return 0;
}