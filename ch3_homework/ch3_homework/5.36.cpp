#include <stdio.h>
#include <stdlib.h>

void f(int n,int from,int aux,int to);
int tow()
{
	int n;
	printf("Enter numbers of disks");
	scanf("%d", &n);
	f(n,1,3,2);
	return 0;
}

void f(int n,int from,int to,int aux)
{
	if (n == 1)
	{
		printf("%d>%d\n", from, to);
		return;
	}
	f(n - 1,from,aux,to);
	printf("%d>%d\n", from, to);
	f(n - 1, aux, to, from);
}