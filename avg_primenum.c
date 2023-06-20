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

    int sumPrime = 0;
    int countPrime = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            sumPrime += arr[i];
            countPrime++;
        }
    }

    double averagePrime = (double) sumPrime / countPrime;

    printf("Average of prime numbers: %.2f\n", averagePrime);

    return 0;
}
