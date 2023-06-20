#include<stdio.h>
int main(){
    int i,j,temp,arr[10],freq[10],count,n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements into the array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("The sorted array:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<n;i++){
        count=1;
        for(j=i+1;j<n;j++){
			if(arr[i]==arr[j]){
				count++;
				freq[j]=0;
			}
		}
    if(freq[i]!=0){
	  freq[i]=count;
		}
	}
	printf("Frequency of each element in the array:\n\n");
	for(i=0;i<n;i++)
	{
		if(freq[i]!=0)
		{
			printf("Element %d -----  %d \n",arr[i],freq[i]);
		}
	}
}