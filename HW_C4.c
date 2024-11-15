#include <stdio.h>

int
f1 (int x)
{
  int temp;
  temp = x * x;
  return temp;
}

int
f2 (int x)
{
  int temp;
  temp = x * x + 4 * x + 5;
  return temp;
}
int
fun (int x)
{
  int res = 0;
  if ((x >= -2) && (x < 2))
    res = f1 (x);
  if (x >= 2)
    res = f2 (x);
  if (x < -2)
    res = 4;
  return res;
}

int
main (void)
{
  int a = 1, b, max = 0;
  do
    {
      scanf ("%d", &a);
      if (a == 0)
        break;
      b = fun (a);
      if (b > max)
        max = b;
    }
  while (a != 0);

  printf ("%d ", max);
  return 0;
}
