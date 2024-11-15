#include <stdio.h>

#include <stdlib.h>

unsigned long long fact(int number) {
  if (number == 0 || number == 1)
    return 1;
  else {
    return number * fact(number - 1);
  }
}

int main() {
  int number = 0;
  //printf("number : ");
  scanf("%d", & number);
  printf("%llu\n", fact(number));

  return 0;
}