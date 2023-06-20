// Input: arr[] = {3, 2, 2, 3, 4, 3} 
// Output: 3 
// Frequency of element 2 is 2 
// Frequency of element 3 is 3 
// Frequency of element 4 is 1 
// 2 and 3 are elements which have same frequency as it’s value and 3 is the maximum.
#include <stdio.h>

int findMaxFrequencyElement(int arr[], int arr_size)
{
    int i, j;
    int max_element = -1;
    int max_frequency = -1;

    for (i = 0; i < arr_size; i++) {
        int count = 0;
        for (j = 0; j < arr_size; j++) {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == arr[i] && arr[i] > max_frequency) {
            max_element = arr[i];
            max_frequency = count;
        }
    }

    return max_element;
}

int main()
{
    int arr[] = {2, 3, 5, 4, 5, 2, 5, 3, 5, 2, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxFrequencyElement = findMaxFrequencyElement(arr, n);

    if (maxFrequencyElement != -1)
        printf("Maximum element with frequency equal to its value: %d\n", maxFrequencyElement);
    else
        printf("No element with frequency equal to its value found.\n");

    return 0;
}
