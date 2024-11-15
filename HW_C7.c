#include <stdio.h>

#include <stdlib.h>

void convert(int, int);
int power(int, int);

int
main() {
  int number, base;
  scanf("%d%d", & number, & base);
  convert(number, base);

  return 0;
}

void
convert(int number, int base) {
  int modulo;
  int res = 0;
  for (int i = 0; number; i++) {
    modulo = number % base;
    res += (power(10, i) * modulo);
    number /= base;
  }
  printf("%d\n", res);
}

int
power(int x, int power) {
  int result = 1;

  for (int i = 1; i <= power; i++) {
    result = result * x;
  }
  return result;
}