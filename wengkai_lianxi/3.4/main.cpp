#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	if (x > 100||x<0) {
		printf("ÎÞÐ§³É¼¨\n");
	}else if(x>=90) {
		printf("A\n");
	} else if (x >= 80) {
		printf("B\n");
	} else if (x >= 70) {
		printf("C\n");
	} else if (x >= 60) {
		printf("D\n");
	} else if (x < 60) { 
		printf("E\n");
	}
	return 0;
}