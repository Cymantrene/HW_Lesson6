#include <stdio.h>



int main()
{
int count = 0;
char input;
    while (1)
    {
        scanf("%c", &input);
    if (input == '.')
        break;
    if (input >= '0' && input <= '9')
        count++;
    }
    printf("%d", count);


    return 0;
}
