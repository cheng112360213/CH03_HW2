#include<stdio.h>
#include<stdlib.h>

void main()
{
	unsigned char a;
	
	printf("enter char:");
	scanf("%c", &a);
	if (64 < a && a< 91)
	{
		a = (int)a + 32;
		printf("=> %c\n", a);
	}
	else if (96 < a && a< 123)
	{
		a = (int)a - 32;
		printf("=> %c\n", a);
	}
}