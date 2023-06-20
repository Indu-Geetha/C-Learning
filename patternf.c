#include<stdio.h>
void main()
{
 int i,j;
 for(i=1;i<=15;i++)

{
 for(j=1;j<=15;j++)
 {
  if(((i>3&&i<7)&&(j>3))||((i>9)&&(j>3)))
  {
  printf(" ");
  }
  else
  {
   printf("*");
  }
  
 }

 printf("\n");
}
}
