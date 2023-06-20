// Enter the size:6
// Enter the eleemnts:1
// 2
// 3
// 45
// 6
// 8
// The array  with all elements:   
// 1 2 3 45 6 8 
// The array without even elements:
// 1 3 45 

#include<stdio.h>
int main(){
    int i,n,k,arr[20];
    printf("Enter the size:");
    scanf("%d",&n);
    printf("Enter the eleemnts:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array  with all elements:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            for(k=i;k<n;k++){
                arr[k]=arr[k+1];
            }
            n--;
            i--;
        }
    }
    printf("\nThe array without even elements:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

// #include<stdio.h>
// int main(){
//     int i ,j ,n,k=0;
//     int arr[5]={4,103,20,10,23};
//     n=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<n;i++){
//         if(arr[i]%2!=0){
//            arr[k++]=arr[i];
//         }
//     }
//     printf("%d\n",k);
//     printf("Array without even numbers:");
//         for(i=0;i<k;i++){
//             printf(" %d ",arr[i]);
//         }
    
// }