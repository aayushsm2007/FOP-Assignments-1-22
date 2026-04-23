#include <stdio.h>

// With pointers (actual swap)
void sw1(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
    printf("After swap (with pointers): %d %d\n", *a, *b);
}

int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    printf("Before swap: %d %d\n", x, y);
    sw1(&x, &y);
    printf("Values in main after swap: %d %d\n", x, y);
    return 0;
}
