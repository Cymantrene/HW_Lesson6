#include <stdio.h>

void reCode(char * st) {
  int i;
  int mask = 0x20;
  for (i = 0; i < strlen(st); i++) {
    if (st[i] == '.') st[i] = 0x00;
    if (isalpha(st[i]) && ((st[i] >= 'a') && (st[i] <= 'z')))
      st[i] ^= mask;
  }
}

int main() {
  char st[200] = {
    0
  };
  gets(st);
  reCode(st);
  printf("%s", st);
  return 0;
}