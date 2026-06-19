#include<stdio.h>
int main() {
	int i;
	scanf_s("%d", &i);
	int a = (i / 100) * 10;
	int b = (i / 10) - a;
	int c = i - (a * 10 + b * 10);
	printf("%d\n", c * 100 + b * 10 + a / 10);
	return 0;
}