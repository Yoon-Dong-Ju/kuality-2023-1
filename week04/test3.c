#include <stdio.h>

int fact(int n) 
{
	int i, temp = 1;
	for (i = 1; i <= n; ++i)
		temp *= i;

	return temp;
}

int main()
{
	int result = fact(3);
	printf("%d", result);
}