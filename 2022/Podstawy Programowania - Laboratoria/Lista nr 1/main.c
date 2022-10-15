#include <stdio.h>

#define lower 0
#define upper 300
#define step 20


int pierwszy()
{
    printf("Hello world!\n");
    return 0;
}

int drugi()
{
    int fahr, lower_temp, upper_temp, step_temp;

    lower_temp = 0;
    upper_temp = 1000;
    step_temp = 10;
    fahr = lower_temp;

    while(fahr <= upper_temp)
    {
        printf("%4d\t%6d\n", fahr, (5*(fahr-32)/9));
        fahr = fahr + step_temp;
    }
    return 0;
}

int trzeci()
{
    int fahr, celcius;

    for(fahr = lower; fahr <= upper; fahr += step)
    {
        celcius = 5*(fahr-32)/9;
        printf("%3d\t%6d\n", fahr, celcius);
    }
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

    return 0;
}
