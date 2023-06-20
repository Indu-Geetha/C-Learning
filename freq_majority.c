// Enter the size of  the array:6
// Enter the elements in to the array:
// 54
// 64
// 78
// 54
// 54
// 64
// The majority element with maximum frequency is: 54 


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j,count,arr[20],freq[20],size;
	setbuf(stdout,NULL);
	printf("Enter the size of  the array:");
	scanf("%d",&size);
	printf("Enter the elements in to the array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0){
			freq[i]=count;
		}
	}
	int max_freq=size/2;
	for(i=1;i<size;i++){
		if(freq[i] > max_freq && freq[i]!=0){
			max_freq=freq[i];
		}
	}
	printf("The majority element with maximum frequency is:");
	for(i=0;i<size;i++)
	{
		if(freq[i]>=max_freq && freq[i]!=0){
			printf(" %d ",arr[i]);
		}
		
	}

	return EXIT_SUCCESS;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//   int i,j,n,a[50],majority,count=0;
//   setbuf(stdout,NULL);
//   printf("Enter  the size");
//   scanf("%d",&n);
//   printf("Input the elements");
//   for(i=0;i<n;i++)
//   {
//     scanf("%d",&a[i]);
//   }
//       count = 1;
//       for (i = 0; i < n; i++)
//       {
//           for (j = i + 1; j < n; j++)
//           {
//               if (a[i] == a[j])
//               {
//                   count++;
//               }
//           }
//           if (count > n / 2)
//           {
//               majority = a[i];
//               break;
//           }
//           else
//           {
//               count = 1;
//           }
//       }

//       if (count > n / 2)
//       {
//           printf("\nThe majority element is: %d\n", majority);
//       }
//       else
//       {
//           printf("\nNot found\n");
//       }

//       return EXIT_SUCCESS;
//   }