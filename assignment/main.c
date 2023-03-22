#pragma warning(disable:4996)
#pragma warning(disable:6031)

#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	printf("두 수를 입력하세요: ");
	scanf(" %d %d", &a, &b);

	printf("%d + %d = %d \n", a, b, a + b);
	printf("%d - %d = %d \n", a, b, a - b);
	printf("%d * %d = %d \n", a, b, a * b);
	printf("%d / %d = %d \n", a, b, a / b);
	return 0;
}