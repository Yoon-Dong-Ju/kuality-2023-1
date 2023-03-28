#include <stdio.h>
#pragma warning(disable:4996)
#pragma warning(disable:6031)

void func();
void func2(int x);

int main()
{
	int res;
	printf("아무 숫자나 입력하세요: ");
	scanf(" %d", &res);

	func2(res);

	func();
	return 0;
}

void func()
{
	int a = 0;
	printf("아무 숫자나 입력하세요: ");
	scanf(" %d", &a);
	printf("%d + %d = %d\n", a, a, a + a);
	printf("%d - %d = %d\n", a, a, a - a);
	printf("%d * %d = %d\n", a, a, a * a);
	printf("%d / %d = %d\n", a, a, a / a);
}

void func2(int x)
{
	printf("%d + %d = %d\n", x, x, x + x);
	printf("%d - %d = %d\n", x, x, x - x);
	printf("%d * %d = %d\n", x, x, x * x);
	printf("%d / %d = %d\n", x, x, x / x);
}