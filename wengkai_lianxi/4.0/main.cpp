#include<stdio.h>
int main() {
	int x;
	scanf_s("%d", &x);
	int a,b,c;
	int count = 0;
	for (a = x; a <= x + 3; a++) {
		for (b = x; b <= x + 3; b++) {
			for (c = x; c <= x + 3; c++) {
				if(a != b && a != c && b != c) {
					printf("%d%d%d", a,b,c);
					count++;
					if (count % 6 == 0) {
						printf("\n");
					}
					else {
						printf(" ");
					}
				}
			}
		}
	}
	return 0;
}