#include<stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, -5, 6, 7, 8, 9, 10};
    int smallest = arr[0];
    int second_smallest = arr[0];
    int i, n = 10;

    for(i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] != smallest) {
            second_smallest = arr[i];
        }
    }

    printf("The second smallest element is: %d\n", second_smallest);

    return 0;
}
