#include <stdio.h>

int main() {
    int a, b, ch, i;
    int result, fact = 1, power = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1.Add 2.Sub 3.Mul 4.Div 5.Power 6.Factorial\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Result = %d", a + b);
            break;

        case 2:
            printf("Result = %d", a - b);
            break;

        case 3:
            printf("Result = %d", a * b);
            break;

        case 4:
            printf("Result = %d", a / b);
            break;

        case 5:
            for(i = 0; i < b; i++)
                power *= a;
            printf("Power = %d", power);
            break;

        case 6:
            for(i = 1; i <= a; i++)
                fact *= i;
            printf("Factorial = %d", fact);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
