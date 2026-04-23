#include <stdio.h>

int findGCD(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int smallestDivisor(int n){
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            return i;
        }
    }
    return n;
}

int main() {

    int num1, num2;

    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);

    int sd1 = smallestDivisor(num1);
    int sd2 = smallestDivisor(num2);
    int gcd = findGCD(num1, num2);

    printf("Smallest divisor of %d is: %d\n", num1, sd1);
    printf("Smallest divisor of %d is: %d\n", num2, sd2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
