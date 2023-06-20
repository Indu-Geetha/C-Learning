// #include <stdio.h>

// int main() {
//     int i,j,a[100] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15},n=15,k,flag;
//     for(i=0;i<n;i++)
//     {
//         flag = 0;
//         for(j=2;j<=a[i]/2;j++)
//         {
//             if(a[i]%j == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if(flag ==0)
//         {
//             if(i == n-1)
//             {
//                 n=n;
//             }
//             else if(i == n-2)
//             {
//                 n=n-1;
//             }
//             else{
//                 for(k=i;k<n;k++)
//                 {
//                     a[k+1] = a[k+3];
//                     a[k+2] = a[k+4];
//                 }
//                 n=n-2;
//             }
            
//         }
//         if(a[i]%2 == 0)
//         {
//             a[i] = 0;
//         }
//     }
//     printf("New array: \n");
//     for(i=0;i<n;i++)
//     {
//         printf("%d ",a[i]);
//     }
    
//     return 0;
// }


#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    int limit = sqrt(num);
    for (int i = 2; i <= limit; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int a[100] = {11, 2, 3, 14, 5, 6, 7, 8,19, 10, 11, 12, 13, 14, 15};
    int n = 15, k, count = 0;
    
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            count++;
            if (i + 2 < n) {
                for (k = i+1; k < n - 2; k++) {
                    a[k] = a[k + 2];
                }
                n -= 2;
            } else {
                n = i + 1;
                break;
            }
        }
        if (a[i] % 2 == 0) {
            a[i] = 0;
        }
    }
    
    printf("New array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    
    return 0;
}
