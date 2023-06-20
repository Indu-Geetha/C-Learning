#include <stdio.h>


int main() {
    int arr[] = {10, 5, 12, 3, 8};
    int n = 6,sum=0;
    int position = 3;  // Index to insert the element
    int element = 15;  // Element to be inserted

    // Check if position is valid
    if (position < 0 || position > n) {
        printf("Invalid position.\n");
        return 0;
    }

    // Shift elements and insert the element
    for (int i = n-1; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;

    // Print the updated array
    printf("Array after inserting element: ");
    for (int i = 0; i < n-1; i++) {
        printf("%d ", arr[i]);
        sum+=arr[i];
    }
    printf("\nThe sum %d:",sum);

    return 0;
}
