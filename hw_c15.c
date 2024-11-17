#include <stdio.h>
#include <stdlib.h>

int grow_up(int number){

  if (number < 10 || number == 0)
    return 1;

  int last_num = number % 10;
  number = number / 10;
  int first_num = number % 10;
   int curr = first_num < last_num ? 1 : -1;
  if (first_num == last_num) curr = 0;

  if (number < 10)
    return curr;

  return curr == grow_up(number) ? curr : 0;
}

int main()
{
    int number;
    scanf("%d", &number);
    if(grow_up(number)) printf("YES");
    else  printf("NO");
    return 0;
}
