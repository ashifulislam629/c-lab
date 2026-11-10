#include <stdio.h>

int main() {
    int n1, n2, num, i;
    int prime, count = 0;

    printf("Enter N1: ");
    scanf("%d", &n1);
    printf("Enter N2: ");
    scanf("%d", &n2);

    printf("Prime numbers: ");

    for (num = n1; num <= n2; num++) {
        prime = 0;

        for (i = 1; i <= num; i++) {
            if (num % i == 0) {
                prime++;
            }
        }

        if (prime == 2) {
            printf("%d ", num);
            count++;
        }
    }

    printf("\nTotal primes: %d", count);
    return 0;
}