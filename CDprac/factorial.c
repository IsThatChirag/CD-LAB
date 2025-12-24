#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial does not exist for negative numbers.");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial = %lld", fact);

    return 0;
}
