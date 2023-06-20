#include <stdio.h>

int findFrequency(int arr[], int size, int num)
{
    int frequency = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == num)
        {
            frequency++;
        }
    }
    
    return frequency;
}

int main()
{
    int arr[] = {4, 4, 4, 5, 2, 4, 6, 5,2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int frequency = findFrequency(arr, arr_size, num);
    
    printf("The frequency of %d in the array is %d\n", num, frequency);
    
    return 0;
}
