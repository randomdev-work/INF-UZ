#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void zad1() {
   int a;
   while ((a = getchar()) != EOF) {
      putchar(a);
   }
}

void zad2() {
   char string[] = "Ala ma kota";  
   int count = 0;  
      
   for(int i = 0; i < strlen(string); i++) {  
      if(string[i] != ' ') {
         count++;  
      }
   }
   printf("Liczba znakow w stringu: %d \n", count);

   int a, lineCount = 1;
   while(string[a] != '\0') {
      if(string[a] == '\n') {
            lineCount++;
      }
      a++;
   }
   printf("Liczba lini w stringu: %d \n", lineCount);

   int n = 0;
   int wordCount = 1;
   while(string[n] != '\0') {
      if(string[n] == ' ' ||
         string[n] == '\n' ||
         string[n] == '\t') {
            wordCount++;
      }
      n++;
   }
   printf("Liczba slow w stringu: %d \n", wordCount);
}


void zad3() {
   int n;
   scanf("%d", &n);
   printf("%d", n*n*n);
}

void zad4() {
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   if(a+b>c && a+c>b && b+c>a) {
      printf("TAK");
   } else {
      printf("NIE");
   }
}

void zad6() {
   int a;
   scanf("%d", &a);
   printf("%x", a);
}

void zad7() {
   int monthDays[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   int day, month, days;

   printf("Podaj dzień miesiąca: ");
   scanf("%d", &day);

   printf("Podaj miesiąc: ");
   scanf("%d", &month);

   if(day < 1 || day > 31 || month < 1 || month > 12) {
      printf("Niepoprawna data");
      return;
   }

   switch (month){
   case 1:
      days = day;
      break;
   case 2:
      days = monthDays[0] + day;
      break;
   case 3:
      days = monthDays[0] + monthDays[1] + day;
      break;
   case 4:
      days = monthDays[0] + monthDays[1] + monthDays[2] + day;
      break;
   case 5:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + day;
      break;
   case 6:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + day;
      break;
   case 7:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + day;
      break;
   case 8:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + day;
      break;
   case 9:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + day;
      break;
   case 10:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + monthDays[8] + day;
      break;
   case 11:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + monthDays[8] + monthDays[9] + day;
      break;
   case 12:
      days = monthDays[0] + monthDays[1] + monthDays[2] + monthDays[3] + monthDays[4] + monthDays[5] + monthDays[6] + monthDays[7] + monthDays[8] + monthDays[9] + monthDays[10] + day;
      break;
   default:
      break;
   }

   printf("Podany dzień jest: %d dniem w roku", days);
}

void zad8() {
   int a;
   scanf("%d", &a);
   if(a%2 == 0) {
      printf("Parzysta");
   } else {
      printf("Nieparzysta");
   }
}

void zad9() {
  char znak;
  double first, second;
  printf("Wybierz operację (+, -, *, /): ");
  scanf("%c", &znak);
  printf("Podaj dwie wartości: ");
  scanf("%lf %lf", &first, &second);

  switch (znak) {
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
      if (second == 0) {
        printf("Nie można dzielić przez 0");
      } else {
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      }
      break;
    default:
      printf("zły znak");
  }
}

int main() {
   int wybor;
   printf("Podaj numer zadania (1-9 bez 5): ");
   scanf("%d", &wybor);
   switch(wybor) {
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
