// Input the number of elements to be stored in the array: 6
// Input 6 elements in the array :
// element - 0 : 1
// element - 1 : 2
// element - 2 : 3
// element - 3 : 1
// element - 4 : 2
// element - 5 : 5

// The unique elements found in the array are: 
// 3 5 
// Sum of unique elements:8
// Average of unique elements4.000000

#include <stdio.h>
int main()
{
    int arr1[100], n,ctr=0,S=0,P=0;
    int i, j, k;
       printf("\n\nPrint all unique elements of an array:\n");
       printf("------------------------------------------\n");	
       printf("Input the number of elements to be stored in the array: ");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");

    //logic to print the unique element
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0; j<n; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i!=j)
            {
		       if(arr1[i]==arr1[j])
              {
                 ctr++;
               }
             }
        }
       if(ctr==0)
        {
          printf("%d ",arr1[i]);
          P++;
          S=S+arr1[i];
        }
    }
       printf("\nSum of unique elements:%d\n\n",S);
       printf("%d",P);
       float avg=S/P;
       printf("\nAverage of unique elements%f",avg);
}