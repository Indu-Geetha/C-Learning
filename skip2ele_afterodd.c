#include<stdio.h>
int main(){
    int i,j=0,k,n,a[10];
    printf("Enter the number of rows:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;){
     if(a[i]%2!=0){
        // printf("%d",a[i]);
        a[j]=a[i];
        i+=3;
     }
     else{
        // printf("%d",a[i]);
         a[j]=a[i];
       i++;
     }
     j++;


    }
    for(i=0;i<j;i++)
    {
        printf(" %d",a[i]);
    }
   

}