// enter the number of rows:7
// W           E 
//   E       M
//     L   O
//       C
//     L   O
//   E       M
// W           E

#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    char arr[]="WELCOME";
   n=strlen(arr);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j ||(i+j)==n-1)
               printf("%c ",arr[j]);
            else
              printf("  ");
        }
        printf("\n");
    }
}