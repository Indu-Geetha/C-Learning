// 1 
// 4
// 4 5 8 9
// 1
// 4
// 5
// 4 5 8 9 12 13 16 17
// 1
// 4
// 5
// 8
// 4 5 8 9 12 13 16 17 20 21 24 25
#include <stdio.h>

void generate_pattern() {
    int num_lines = 3;  // Number of lines in the pattern
    int asterisks[] = {1, 4, 5, 8, 9, 12, 13,16, 17, 20,21,24,25,28,29,32};  // Number of asterisks in each line
    
    int i,j,k,n;
    for(i=1;i<=num_lines;i++){
        for(j=0;j<=i;j++){
            printf("%d ",asterisks[j]);
            printf("\n");
        }
        for(k=i;k<=4*i;k++){
            printf("%d ",asterisks[k]);
        }
        printf("\n");
    }
}

int main() {
    generate_pattern();
    return 0;
}