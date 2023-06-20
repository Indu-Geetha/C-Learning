#include <stdio.h>
#include <stdlib.h>

void printRepeating(int arr[], int size)
{
	int i, j;
	printf("Repeating elements are: ");

	int count = 0;
	for (i = 0; i < size; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
				if (count <= 2)
					printf("%d ", arr[i]);
				break;
			}
		}
		if (count == 2)
			break;
	}
}

int main()
{
	int arr[] = { 25, 6, 4, 25, 2, 4, 6,5 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);

	printRepeating(arr, arr_size);

	getchar();
	return 0;
}



