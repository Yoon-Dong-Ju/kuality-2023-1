#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int factorial(int n)
{
	int result = 1;
	while (n > 0)
	{
		result = result * n;
		n = n - 1;
	}
	return result;
}

int main()
{
	int my_input;
	printf("Input number : ");
	scanf(" %d", &my_input);

	printf("factorial(%d) = %d\n", my_input, factorial(my_input));
}