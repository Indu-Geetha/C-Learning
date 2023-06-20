#include <stdio.h>

int main() {
    int arr[] = {11, 8, 3, 20, 30, 15, 78, 17, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        int isPrime = 1;
        for (int j = 2; j < arr[i]; j++) {
            if (arr[i] % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            arr[i] = 0;
        } else if (arr[i] % 2 == 0) {
            arr[i] = '*';
        }
    }

    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        if (arr[i] == '*') {
            printf("* ");
        } else {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}

