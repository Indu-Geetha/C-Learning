/*
 ============================================================================
 Name        : Ma_Freq_Element.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i ,j,count,arr[10],freq[10],size;
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
	int max_freq=freq[0];
	for(i=1;i<size;i++){
		if(freq[i] > max_freq && freq[i]!=0){
			max_freq=freq[i];
		}
	}
	printf("The elements with maximum frequency");
	for(i=0;i<size;i++)
	{
		if(freq[i]==max_freq && freq[i]!=0){
			printf(" %d ",arr[i]);
		}
	}

	return EXIT_SUCCESS;
}
