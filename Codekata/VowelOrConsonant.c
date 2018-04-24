#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	switch(c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':	
			 printf("Vowel");
			break;
		default:
		 	printf("Consonant");
	}
	return 0;
}
