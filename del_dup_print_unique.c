#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1, 5, 6, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j, k, count;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < size; i++) {
        count = 0;
        for (j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > 1) {
            for (k = i; k < size - 1; k++) {
                arr[k] = arr[k + 1];
            }
            size--;
            i--;
        }
    }

    printf("\nArray after deleting elements appearing more than once: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
