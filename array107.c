// Write a C program to convert an array in such a way that it doubles its value. 
// This will replace the next element with 0 if the current and next elements are the same. 
// This program will rearrange the array so that all 0's are moved to the end.
// The given array is: 0 3 3 3 10 10 7 7 0 9 
// The new array is: 6 3 20 14 9 0 0 0 0 0    
#include <stdio.h>

int main() {
    int arr1[] = {5, 3, 3, 3, 10,10, 7, 7, 0, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    printf("The given array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    int K = 0;
    for (int i = 0; i < n; i++) {
        if (arr1[i] != 0) {
            if (arr1[i] == arr1[i + 1]) {
                arr1[K++] = 2 * arr1[i];
                i++;
            } else {
                arr1[K++] = arr1[i];
            }
        }
    }
    while (K < n) {
        arr1[K++] = 0;
    }

    printf("\nThe new array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}
