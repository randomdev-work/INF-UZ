#include <stdio.h>

void zad1()
{
   int n = 0;

   printf("Podaj liczbe: ");
   scanf("%d", &n);

   printf("\n%d ^ 2 = %d", n, (n * n));
   return;
}

void zad2()
{
   int a, b, c = 0;

   printf("Podaj liczbe A: ");
   scanf("%d", &a);

   printf("Podaj liczbe B: ");
   scanf("%d", &b);

   printf("Podaj liczbe C: ");
   scanf("%d", &c);

   printf("\n(%d + %d + %d) / 3 = %d", a, b, c, ((a + b + c) / 3));
   return;
}

void zad3()
{
   int n = 0;

   printf("Podaj liczbe: ");
   scanf("%d", &n);

   if (n < 0)
      printf("\n|%d| = %d", n, (n * (-1)));
   else
      printf("\n|%d| = %d", n, n);
}

void zad4()
{
   int n = 0;

   printf("Podaj liczbe: ");
   scanf("%d", &n);

   if (n > 0)
      printf("\n%d > 0", n);
   else if (n == 0)
      printf("\n%d == 0", n);
   else
      printf("\n%d < 0", n);

   return;
}

void zad5()
{
   int a, b, c, max = 0;

   printf("Podaj liczbe A: ");
   scanf("%d", &a);

   printf("Podaj liczbe B: ");
   scanf("%d", &b);

   printf("Podaj liczbe C: ");
   scanf("%d", &c);

   if (a < b && c < b)
      max = b;
   else if (b < a && c < a)
      max = a;
   else if (a == b && a == c && c == b)
   {
      printf("%d == %d == %d", a, b, c);
      return;
   }
   else
      max = c;

   printf("\nmax = %d", max);
   return;
}

int main()
{
   int wybor;

   printf("Podaj numer zadania (1-5): ");
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
   default:
      printf("Nie ma takiego zadania");
      break;
   }
   printf("\n");
   return 0;
}
