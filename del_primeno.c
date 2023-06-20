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

int deletePrimes(int arr[], int n) {
    int i, j;
    int newSize = n;

    for (i = 0; i < newSize; i++) {
        if (isPrime(arr[i])) {
            for (j = i; j < newSize - 1; j++) {
                arr[j] = arr[j + 1];
            }
            newSize--;
            i--;
        }
    }

    return newSize;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {10, 5, 12, 3, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, n);

    n = deletePrimes(arr, n);

    printf("Array after deleting primes: ");
    printArray(arr, n);

    return 0;
}
