#include <stdio.h>

int main() {
    int arr[] = {11, 8, 3, 20, 30, 15, 7, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        } else {
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

    printf("Sum of even numbers: %d\n", sum);

    return 0;
}
