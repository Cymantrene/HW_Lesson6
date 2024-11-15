#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, sum=0;
    scanf("%d", &number);
  for(int i=1; i<=number; i++)
  {
      sum +=i;
  }
    printf("%d", sum);
    return 0;
}
