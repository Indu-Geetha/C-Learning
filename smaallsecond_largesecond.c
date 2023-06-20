#include <stdio.h>

int main() {
    int arr[] = {101, 5, 212, -3, 8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 0;
    }

    int smallest = arr[0];
    int secondSmallest = arr[0];
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }

        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Smallest: %d\n", smallest);
    printf("Second Smallest: %d\n", secondSmallest);
    printf("Largest: %d\n", largest);
    printf("Second Largest: %d\n", secondLargest);

    return 0;
}
