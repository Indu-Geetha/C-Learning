#include <stdio.h>

int main() {
    int sum=0, arr[] = {90, 2, -5, 1, -7, 3};  // Example array
    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array
    int minIndex = 0;

    // Find the index of the smallest element
    for (int i = 1; i < size; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // Shift elements to the left starting from minIndex
    for (int i = minIndex; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Reduce the size of the array by 1
    size--;

    // Print the updated array
    printf("Array after deleting the smallest element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        sum+=arr[i];
    }
    printf("\n");
    printf("The sum of the remaining elements in the array:%d",sum);

    return 0;
}

                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    