
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,arr[20],freq[20],size,count;
	setbuf(stdout,NULL);
	printf("Enter the size of the array:\n");
	scanf("%d",&size);
	printf("Enter the elements  into the array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
		freq[i]=-1;
	}
	for(i=0;i<size;i++){
		count=1;
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	int min_freq=freq[0];
	for(i=1;i<size;i++){
		if(freq[i]<min_freq && freq[i]!=0){
			min_freq=freq[i];
		}
	}
	printf("Elements with minimum frequency");
	for(i=0;i<size;i++){
		if(freq[i] == min_freq  &&  freq[i]!=0){
			printf(" %d ",arr[i]);
		}
	}


	return EXIT_SUCCESS;
}