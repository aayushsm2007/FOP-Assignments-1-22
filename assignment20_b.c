#include <stdio.h>

// Without pointers (pass-by-value — does NOT swap in main)
void sw1(int a, int b) {
    int t;
    t = a;
    a = b;
    b = t;
    // Changes are local; original x and y are unaffected
}

// With pointers (pass-by-reference — DOES swap in main)
void sw2(int *a, int *b) {
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    sw1(x, y);        // No actual swap in main
    sw2(&x, &y);      // Actual swap using pointers
    printf("After swap (with pointers): %d %d\n", x, y);
    return 0;
}
