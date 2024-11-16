#include <stdio.h>

#include <stdlib.h>

int nod(int a, int b);
int main() {
  int n1, n2;
  scanf("%d%d", & n1, & n2);
  nod(n1, n2);
  printf("%d", nod(n1, n2));
  return 0;
}

int nod(int n1, int n2) {
  int temp;
  while (n2) {
    temp = n1 % n2;
    n1 = n2;
    n2 = temp;
  }
  return abs(n1);
}
