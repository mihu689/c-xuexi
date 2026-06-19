#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d:%d", &a, &b);
	if (a == 0||a==24) {
		printf("0点%d分 AM", b);
	}
	else if (a>=12) {
		printf("%d:%d PM", a - 12, b);
	}
	else if (a < 12) {
		printf("%d点%d分 AM", a, b);
	}
	return 0;
}