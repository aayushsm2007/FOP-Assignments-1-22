#include <stdio.h>
#include <math.h>

int main() {
    int n, ch, i, fact = 1, flag = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("\n1.Square 2.Cube 3.Sqrt 4.Prime 5.Factorial 6.Prime Factors\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Square = %d", n * n);
            break;

        case 2:
            printf("Cube = %d", n * n * n);
            break;

        case 3:
            printf("Square Root = %.2f", sqrt(n));
            break;

        case 4:
            if(n <= 1) flag = 0;
            for(i = 2; i < n; i++) {
                if(n % i == 0) {
                    flag = 0;
                    break;
                }
            }
            if(flag) printf("Prime");
            else printf("Not Prime");
            break;

        case 5:
            for(i = 1; i <= n; i++)
                fact *= i;
            printf("Factorial = %d", fact);
            break;

        case 6:
            printf("Prime Factors: ");
            for(i = 2; i <= n; i++) {
                while(n % i == 0) {
                    printf("%d ", i);
                    n /= i;
                }
            }
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
