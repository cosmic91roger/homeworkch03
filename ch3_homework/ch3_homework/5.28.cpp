#include <stdio.h>
#include <stdlib.h>

void fun(char a);

int cha(void)
{
	char a;
	printf("Enter character");
	scanf(" %c", &a);
	fun(a);
	return 0;
}

void fun(char a)
{
	if (a >= 65 && a <= 90)
	{
		a = a + 32;
		printf("%c\n", a);
	}
	else if (a >= 97 && a <= 122)
	{
		a = a - 32;
		printf("%c\n", a);
	}

}