// Prime numbers: 5 3 7 
// Sum of prime numbers:15
// Average of non-prime numbers: 10.00
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    int limit = sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int arr[] = {10, 5, 12, 3, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sumNonPrime = 0;
    int countNonPrime = 0;
    int sumPrime = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sumPrime += arr[i];
        } else {
            sumNonPrime += arr[i];
            countNonPrime++;
        }
    }

    double averageNonPrime = (double) sumNonPrime / countNonPrime;

    printf("Prime numbers: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Sum of prime numbers:%d\n",sumPrime);
    printf("Average of non-prime numbers: %.2f\n", averageNonPrime);

    return 0;
}
