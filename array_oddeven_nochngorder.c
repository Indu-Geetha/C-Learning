// /without changing order
#include <stdio.h>

int main()
{
  int i,j,temp,arr[10]={9,12,3,7,89,34,15,16,67,25};
 int n=sizeof(arr)/sizeof(arr[0]);
  for(i=n;i>0;i--)
  {
      for(j=0;j<i;j++)
      {
        if(arr[j]%2==0  && arr[j+1]%2==1)
           {
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;
           }

      }
  }
  printf("array:");
for(i=0;i<n;i++)
{
   printf(" %d ",arr[i]);
}

   return 0;
}