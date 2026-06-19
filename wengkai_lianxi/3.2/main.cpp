#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		printf("NO\n");
	}
	else {
		if(a!=b && b!=c && a!=c) {
			printf("NO\n");
		}
		else if (a == b) {
			printf("C\n");
		}
		else if(a == c) {
				printf("B\n");
		}
		else {
			printf("A\n");
		

		}
	}
	return 0;
}