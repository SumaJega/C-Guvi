#include<stdio.h>
int main()
{
	int a,b,c=0,i;
	printf("Enter two numbers:");
	scanf("%d\t%d",&a,&b);
	for(i=0;i<b;i++)
	{
	  c=c+a;
	}
	printf("Multiplication of %d and %d is %d\n",a,b,c);
	return 0;
}
