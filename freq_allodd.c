#include <stdio.h>

void findOddOccurrences(int arr[], int arr_size)
{
    int i, j,k=0;
    int count;
     for(i=0;i<arr_size;i++){
        printf("%d ",arr[i]);
    }

    // Find the count of each element
    for (i = 0; i < arr_size; i++) {
        count= 0;
        for (j = 0; j < arr_size; j++) {
            if (arr[i] == arr[j])
                count++;
        }

        // Check if count is odd
        if (count % 2 != 0) {
           arr[k++]=arr[i];
        }
    } 
    for(i=0;i<k;i++){
        printf("\n%d ",arr[i]);
    }

    // printf("Numbers occurring odd number of times: %d %d %d\n", num1, num2,num3);
}

int main()
{
    int arr[] = {1,2,3,4,4,5,5,6,6,3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findOddOccurrences(arr, n);
    return 0;
}
