

#include <stdio.h>
 
int main()
{
  int c, n, fact = 1;
  scanf("%d", &n);
 if(n<=20)
 {
  for (c = 1; c <= n; c++)
    fact = fact * c;
    printf("%d",fact);
 }
 else
 {
     printf("");
 }
  return 0;
}
