#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,count,size,freq[10],arr[10];
	setbuf(stdout,NULL);
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	printf("Enter elements in the array:\n");
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
	printf("Frequency of each element in the array:\n");
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			printf("Element %d---Occurs  %d times\n",arr[i],freq[i]);
		}
	}
	return EXIT_SUCCESS;
}
