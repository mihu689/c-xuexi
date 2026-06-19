#include <stdio.h>

int main()
{
	int x;
	scanf_s("%d", &x);
	int a = x / 16;
	int b = x % 16;
	printf("0x%d\n", a * 10 + b);
	return 0;

}