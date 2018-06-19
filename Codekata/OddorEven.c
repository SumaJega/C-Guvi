#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	if(1<=num<=100000)
	{
		if(num%2==0)
			printf("Even");
		else 
			printf("Odd");
	}
	else
		printf("Invalid Input");
	return 0;
}
