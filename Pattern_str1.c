// M
// MA
// MAL
// MALA
// MALAY
// MALAYA
// MALAYAL
// MALAYALA
// MALAYALAM

#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "MALAYALAM";
    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", word[j]);
        }
        printf("\n");
    }

    return 0;
}