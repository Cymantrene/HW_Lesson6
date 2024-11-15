#include <stdio.h>
#include <stdlib.h>

int abs(int number)
{
    return number < 0 ? number : number;
}


int main()
{
    int number;
    scanf("%d", &number);
    printf("%d", abs(number));

    return 0;
}
