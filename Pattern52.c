//                  1
//               2  3
//            4  5  6
//         7  8  9 10
//     11 12 13 14 15
//  16 17 18 19 20 21
#include<stdio.h>
int main()
{
  int i,j,k;
  k=1;
  for(i=1;i<=6;i++)
  {
    for(j=6;j>=1;j--)
    {
      if(j > i)
        printf("   ");
      else
        printf("%3d",k++);
    }
    printf("\n");
  }
  return 0;
}