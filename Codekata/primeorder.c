#include <stdio.h>
# include <math.h>
void primeFactors(int n)
{
    int i;
while (n%2 == 0)
{
printf("%d ",2);
n = n/2;
}


for (i = 3; i <= sqrt(n); i = i+2)
{
while (n%i == 0)
{
printf("%d ", i);
n = n/i;
}
}
}
int main()
{
int n ;
scanf("%d",&n);
primeFactors(n);
return 0;
}
