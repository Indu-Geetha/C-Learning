#include <stdio.h>

int isElementAlreadyPrinted(int arr[], int index)
{
    int i;
    for (i = 0; i < index; i++) {
        if (arr[i] == arr[index])
            return 1;
    }
    return 0;
}

void findOddOccurrences(int arr[], int arr_size)
{
    int i, j;
    for (i = 0; i < arr_size; i++) {
        int count = 0;
        for (j = 0; j < arr_size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0 && !isElementAlreadyPrinted(arr, i))
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 5, 4, 5, 2, 5, 2, 4, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Elements occurring odd number of times: ");
    findOddOccurrences(arr, n);
    return 0;
}

