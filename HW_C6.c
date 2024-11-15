#include <stdio.h>
#include <stdlib.h>

int
main ()
{
  unsigned long long num, kletka = 1;

  scanf ("%lld", &num);
  if ((num < 1) && (num > 64))
    return 1;

  for (int i = 1; i < num; ++i)
    {
      kletka = kletka * 2;
    }
  printf ("%llu ", kletka);

  return 0;
}
