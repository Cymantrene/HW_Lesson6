#include <stdio.h>
#include <stdlib.h>

int getSum(int n)
{
   int sum = 0, mult=1;
   while (n != 0)
   {
       sum = sum + n % 10;
       mult *= n%10;
       n = n/10;
   }
   if (sum == mult) return 1;
   else return 0;
}

int main()
{

  int n;
  scanf("%d", &n);
  if(getSum(n)) printf("YES");
  else printf("NO");

  return 0;
}
