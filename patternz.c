// Enter number of rows: 5
// * * * * *
//       *
//     *
//   *
// * * * * *


// #include <stdio.h>
// int main() {
// int n;

// printf("Enter number of rows: ");
// scanf("%d", &n);

// for (int row = 0; row < n; row++) {
//     for (int column = 0; column < n; column++) {
//         if (row == 0 || row == n - 1 || column == n - 1 - row) {
//             printf("* ");
//         }
//         else {
//             printf("  ");
//         }
//     }
//     printf("\n");
// }
// return 0;
// }

// Enter number of rows: 5
// * * * * *
//   *
//     *
//       *
// * * * * *

// #include <stdio.h>
// int main() {
// int n;

// printf("Enter number of rows: ");
// scanf("%d", &n);

// for (int row = 0; row < n; row++) {
//     for (int column = 0; column < n; column++) {
//         if (row == 0 || row == n - 1 || column == row) {
//             printf("* ");
//         }
//         else {
//             printf("  ");
//         }
//     }
//     printf("\n");
// }
// return 0;
// }


// ************
// ************
//          ***
//         ***
//        ***
//       ***
//      ***
//     ***
//    ***
//   ***
// ****
// ************
// ************
#include<stdio.h>
int main()
{
 int i,j,q,n;
 for(i=1;i<=5;i++)

{
 for(j=1;j<=12;j++)
 {
  if(((i>=3&&i<=3)&&(j<=8)))
  {
   for(q=0;q<10-j;q++)
    {
    printf(" ");
    }
   for(n=0;n<=2;n++)
    {
    printf("*");
    }
    printf("\n");
    }
  else
  {
   printf("*");
  }  
 }
 printf("\n");
}
}