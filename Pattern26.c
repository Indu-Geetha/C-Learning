// 1 
// 2 6
// 3 7 10
// 4 8 11 13
// 5 9 12 14 15


#include <stdio.h>

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        int currentValue = i;
        for (int j = 1; j <= i; j++) {
            printf("%d ", currentValue);
            currentValue += n - j;
        }
        printf("\n");
    }

    return 0;
}