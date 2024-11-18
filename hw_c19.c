#include <stdio.h>


int main()
{
int sum = 0;
char input;
    while (1)
    {
        scanf("%c", &input);
        if (input == '.')
            break;
         if (input >= '0' && input <= '9') sum += (input - '0');

}
    printf("%d", sum);


    return 0;
}

