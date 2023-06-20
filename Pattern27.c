// 1 n=8  1                
//  2    2
//   3  3
//    44
//    44
//   3  3
//  2    2
// 1      1


// 1 n=7 1
//  2   2 
//   3 3  
//    4   
//   3 3  
//  2   2 
// 1     1
#include <stdio.h>
#include <stdlib.h>
int main()
{
     int n,i,j;
     printf("enter the side of square");
     scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++){
          
       if(i==j||n+1-i==j)
         if(i<=n/2||j<=j/2)
            printf("%d",i);
         else
            printf("%d",n+1-i);
        else
            printf(" ");
      }
       printf("\n");
    }
return 0;
}