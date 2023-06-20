#include <stdio.h>
int main(){
      int i,k,n,arr[10],num,count,digit;
     
      printf("Enter the size of the array:");
      scanf("%d",&n);
      printf("Enter the elements in the array:");
      for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
      }
    printf("Enter the digit to be counted:");
      scanf("%d",&k);
      for(i=0;i<n;i++){
        num=arr[i];
        while (num!=0){
            digit=num%10;
            if(digit==k){
                count++;
            }
            num/=10;
        }
      }
      printf("The count of digit %d:%d\n",k,count);
      return 0;


}