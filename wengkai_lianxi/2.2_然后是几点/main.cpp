#include<stdio.h>
int main() {
	int G,X;
	scanf_s("%d %d", &G,&X);
	int H = (G / 100)*60;
	int M = G % 100;
	int L = (H + M)+X;
	H = L / 60;
	M = L % 60;
	int D = (H * 100) + M;
	printf("%d\n", D);
	return 0;
}