// M A L A Y A L A M  
// A L A Y A L A M 
// L A Y A L A M
// A Y A L A M
// Y A L A M
// A L A M
// L A M
// A M
// M
#include <stdio.h>
#include <string.h>

int main() {
    int len, i, j;
    char str[100];
    
    printf("Enter a string: ");
    gets(str);
    
    len = strlen(str);
    
    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            printf("%c", str[j]);
        }
        printf("\n");
        
    }
    
    return 0;
}

