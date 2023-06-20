#include <stdio.h>

int main() {
    int arr[] = {101, 8, 3, 20, 31, 15, 71, 4, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 5 == 0) {
            arr[i] = 10;
        }
        sum += arr[i];
        count++;
    }

    float average = (float)sum / size;

    printf("Modified array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Average of the modified array: %.2f\n", average);

    return 0;
}
