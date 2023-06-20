#include<stdio.h>
int main(){
    int arr[9]={2,3,4,5,6,7,8,9,10};
    int i,e=0,o=0,even[10],odd[10];
    for(i=0;i<9;i++){
        if(arr[i]%2==0){
            even[e++]=arr[i];
        }
        else{
            odd[o++]=arr[i];
            }
    }
    for(i=0;i < e;i++){
        printf("  %3d  ",even[i]);
    }
    printf("\n");
     for(i=0;i < o;i++){
        printf("  %3d  ",odd[i]);
    }
    return 0;
}