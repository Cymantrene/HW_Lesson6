#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int power(int, int);

int main()
{
    int number, p;
    scanf("%d%d", &number, &p);
    printf("%d", power(number, p));
    return 0;
}

int power(int number, int p)
{
    int rezultat = 1;
    while(p--)
    {
        rezultat *= number;
    }
    return rezultat;
}
