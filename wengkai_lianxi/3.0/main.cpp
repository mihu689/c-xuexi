#include<stdio.h>
int main() {
    int x;
    scanf("%d", &x);
    if (x >= 60) {
        printf("speed:%d - speeding", x);
    }
    else {
        printf("speed:%d - OK", x);

    }
    return 0;
}