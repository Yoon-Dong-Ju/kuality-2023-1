#pragma warning(disable:4996)
#pragma warning(disable:6031)
#include <stdio.h>

int main() {
	int n1, n2, n3;
	char c;
	printf("Input number: ");
	scanf(" %d %d %d", &n1, &n2, &n3);
	printf("Input operator: ");
	scanf(" %c", &c);
	switch (c) {
	case '*':
		printf("n1 * n2 * n3 = %d \n", n1 * n2 * n3);
		break;
	case '+':
		printf("n1 + n2 + n3 = %d \n", n1 + n2 + n3);
		break;
	case '-':
		printf("n1 - n2 - n3 = %d \n", n1 - n2 - n3);
		break;
	case '/':
		printf("n1 / n2 / n3 = %d \n", n1 / n2 / n3);
		break;
	}
}