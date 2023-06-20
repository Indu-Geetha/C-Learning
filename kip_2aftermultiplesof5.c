// The array after skipping 2 elements after multiples of 5:50 4 5 150 
// The maximum multiple of 5 in the array is 150

#include<stdio.h>
int main(){
    int i,j=0,k,max;
   int a[10]={500,2,25,4,5,6,7,150,9,10};
    int n=10;
    //logic for skipping 2 elements after multiples of 5 
    for(i=0;i<n;){
        if(a[i]%5==0){
            a[j]=a[i];
             i+=3;
        }
        else{
            a[j]=a[i];
            i++;
        }
        j++;
    }
    n=j;
//print the array after skipping 2 elements after multiples of 5
printf("The array after skipping 2 elements after multiples of 5:");
for(k=0;k<n;k++)
    {
        printf("%d ",a[k]);
    }
//to find the largest among them
max=a[0];
for(k=0;k<n;k++){
    if(max<a[k]){
        max=a[k];
    }
}
printf("\nThe maximum number in the array is %d",max);
}