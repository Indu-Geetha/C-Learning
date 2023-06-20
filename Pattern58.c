// *
// * *
// *
// *
// *
// * * * *
// *
// * * * * * *
// * 
// *
// *
// * * * * * * * *
#include <stdio.h>

int main()
{
    int num_lines = 5;  // Number of lines in the pattern
    
    int k,i,j;
    for ( i = 0; i<num_lines; i++) {
        for(j=1;j<=2*i;j++){
            printf("* ");
        }
        printf("\n");
       
        if (i %2 == 0) {
                printf("* ");
                 printf("\n");
            }
        else {
            // for(k=1;k<=3;k++){
              printf("*\n*\n*\n");
        // }
        
        }
   
    }
}