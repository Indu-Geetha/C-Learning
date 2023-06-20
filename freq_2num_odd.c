#include <stdio.h>

void findOddOccurrences(int arr[], int arr_size)
{
    int i, j;
    int count;
    int num1=0, num2=0,num3=0;

    // Find the count of each element
    for (i = 0; i < arr_size; i++) {
        count = 0;
        for (j = 0; j < arr_size; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        // Check if count is odd
        if (count % 2 != 0) {
            if (num1 == 0)
                num1 = arr[i];
            else if (num2 == 0)
                num2 = arr[i];
            else if (num3 == 0)
                num3 = arr[i];
        }
    }

    printf("Numbers occurring odd number of times: %d %d %d\n", num1, num2,num3);
}

int main()
{
    int arr[] = {2, 1, 5, 4,4, 5, 5, 4, 5, 2, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findOddOccurrences(arr, n);
    return 0;
}
