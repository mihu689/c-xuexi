#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if (x % 3 == 0) {
        printf("Fishing in day %d\n", x);
    }
    else if (x % 2 == 0) {
        printf("Drying in day %d\n", x);
    }
    return 0;
}