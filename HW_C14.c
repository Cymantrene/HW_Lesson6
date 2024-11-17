#include<stdio.h>

int f(int number) {
  int sum = 0;
  while(number) {
    sum += number % 10;
    number /= 10;
  }
  return (sum);
}
int main() {
  int number, temp;

  scanf("%d", & number);
  temp = f(number);
    if ((temp  % 2)==0) {
      printf("YES\n");
      return 0;
    } else {
      printf("NO\n");
      return 0;
    }


return 0;
}







