// #include<stdio.h>
// int main(){
//     int i ,j ,n,k=0;
//     int arr[5]={4,103,20,10,23};
//     n=sizeof(arr)/sizeof(arr[0]);
//     for(i=0;i<n;i++){
//         if(arr[i]%5!=0){
//            arr[k++]=arr[i];
//         }
//     }
//     printf("%d\n",k);
//     printf("Array without multiples of 5:");
//         for(i=0;i<k;i++){
//             printf(" %d ",arr[i]);
//         }
    
// }

// Array without multiples of 5:
//  4  23  36  67    

#include<stdio.h>
int main() {
    int k;
    int arr[10]={4,5,20,10,23,25,3100,45,36,67};
    int n=sizeof(arr)/sizeof(arr[0]);
     for (int i = 0; i < n;i++){
         if(arr[i]%5==0){
             for(k=i;k<n;k++)
             {
                 arr[k]=arr[k+1];
             }
             n--;
             i--;
         }     
           
     }
      printf("Array without multiples of 5:\n");
        for(int i=0;i<n;i++){
            printf(" %d ",arr[i]);
        }

    return 0;
}
