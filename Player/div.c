#include<stdio.h>
int main()
{
	int a,b,q,t;
	printf("Enter two numbers:");
	scanf("%d\t%d",&a,&b);
	t=a;
	while((a-b)>=0)
	{
		q++;
		a-=b;
	}
	printf("Quotient of %d and %d is %d\n",t,b,q);
	printf("Modulo of %d and %d is %d\n",t,b,a);
	return 0;
}
