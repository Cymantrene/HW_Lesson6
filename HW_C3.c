#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int middle(int, int);

int main()
{
    int number1, number2;
    scanf("%d%d", &number1, &number2);
    printf("%d", middle(number1, number2));
    return 0;
}

int middle (int number1, int number2)
{
    int rezultat;


        rezultat = (number1+number2)/2;

    return rezultat;
}
