#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void zad1()
{
   printf("\nZadanie 1\n\n");
   int a;
   while ((a = getchar()) != '\0')
   {
      putchar(a);
   }
}

void zad2()
{
   printf("\nZadanie 2\n\n");

   char string[] = "Ala ma kota";

   int n, count = 0;
   int a, lineCount, wordCount = 1;

   // Policz znaki
   for (int i = 0; i < strlen(string); i++)
   {
      if (string[i] != ' ')
         count++;
   }
   // Policz linie
   while (string[a] != '\0')
   {
      if (string[a] == '\n')
         lineCount++;
      a++;
   }

   // Policz słowa
   while (string[n] != '\0')
   {
      if (string[n] == ' ' || string[n] == '\n' || string[n] == '\t')
         wordCount++;
      n++;
   }

   printf("Liczba znakow w stringu: %d \n", count);
   printf("Liczba linii w stringu: %d \n", lineCount);
   printf("Liczba slow w stringu: %d \n", wordCount);
}

void zad3()
{
   printf("\nZadanie 3\n\n");

   int n;
   printf("Podaj liczbe: ");
   scanf("%d", &n);

   printf("%d ^ 3 = %d", n, (n * n * n));
}

void zad4()
{
   printf("\nZadanie 4\n\n");

   int a, b, c;

   printf("Podaj A: ");
   scanf("%d", &a);

   printf("Podaj B: ");
   scanf("%d", &b);

   printf("Podaj C: ");
   scanf("%d", &c);

   if (a + b > c && a + c > b && b + c > a)
      printf("\nTrojkat jest prawidlowy.");
   else
      printf("\nTrojkat nie jest prawidlowy.");
}

void zad5()
{
   // Na linuxie nie działa getch()...
}

void zad6()
{
   printf("\nZadanie 6\n\n");

   int a;

   printf("Podaj liczbe: ");
   scanf("%d", &a);

   printf("%d(10) = %x(16)", a, a);
}

int leap(int y)
{
   if (y % 400 == 0)
      return 1;
   else if (y % 100 == 0)
      return 0;
   else if (y % 4 == 0)
      return 1;
   else
      return 0;
}

void zad7()
{
   int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int day, month, year, days;

   printf("Podaj dzień miesiąca: ");
   scanf("%d", &day);

   printf("Podaj miesiąc: ");
   scanf("%d", &month);

   printf("Podaj rok: ");
   scanf("%d", &year);

   if (leap(year) == 1)
      monthDays[1] = 29;

   if (day < 1 || day > 31 || month < 1 || month > 12)
   {
      printf("\nNiepoprawna data.");
      return;
   }

   switch (month)
   {
   case 2:
      days = monthDays[0];
      break;
   case 3:
      days = monthDays[0] + monthDays[1];
      break;
   case 4:
      days = monthDays[0] + monthDays[1] + monthDays[2];
      break;
   case 5:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3];
      break;
   case 6:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4];
      break;
   case 7:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5];
      break;
   case 8:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6];
      break;
   case 9:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7];
      break;
   case 10:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + monthDays[8];
      break;
   case 11:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + monthDays[8] + monthDays[9];
      break;
   case 12:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + monthDays[8] + monthDays[9] + monthDays[10];
      break;
   default:
      break;
   }
   days = days + day;

   printf("Podany dzień jest: %d dniem w roku", days);
}

void zad7_alt()
{
   int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   int i, day, month, year, days;

   printf("Podaj dzień miesiąca: ");
   scanf("%d", &day);

   printf("Podaj miesiąc: ");
   scanf("%d", &month);

   printf("Podaj rok: ");
   scanf("%d", &year);

   if (leap(year) == 1)
      monthDays[1] = 29;

   if (day < 1 || day > 31 || month < 1 || month > 12)
   {
      printf("\nNiepoprawna data.");
      return;
   }

   if (month > 1)
      for (i = 0; i < month - 1; i++)
      {
         printf("\ni = %d || %d + %d = %d\n", i, days, monthDays[i], (days + monthDays[i]));
         days = days + monthDays[i];
         printf("\n%d\n", days);
      }
   days = days + day;

   if (days > 364)
      printf("\nMinal ponad rok.");
   else
      printf("\nOd poczatku roku minelo %d dni.", days);
   return;
}

void zad8()
{
   printf("\nZadanie 8\n\n");

   int a;

   printf("Podaj liczbe: ");
   scanf("%d", &a);

   if (a % 2 == 0)
      printf("\nLiczba jest parzysta.");
   else
      printf("\nLiczba nie jest parzysta.");
}

void zad9()
{
   printf("\nZadanie 9\n\n");

   char znak;
   double first, second;

   printf("Wybierz operację (+, -, *, /): ");
   scanf("%c", &znak);

   printf("Podaj dwie wartości: ");
   scanf("%lf %lf", &first, &second);

   switch (znak)
   {
   case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
   case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
   case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
   case '/':
      if (second != 0)
         printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;
   default:
      printf("Podano niepoprawny znak.");
   }
}

int main()
{
   int wybor;

   printf("Podaj numer zadania (1-9): ");
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
   case 8:
      zad8();
      break;
   case 9:
      getchar(); // zapobiega pobraniu \0 jako znak działania
      zad9();
      break;
   default:
      printf("Nie ma takiego zadania");
      break;
   }
   return 0;
}
