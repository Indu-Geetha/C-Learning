// Enter the limit
// 5
// 2
// 4       6
// 8       10      12
// 14      16      18      20
// 22      24      26      28      30


#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,limit,n=1;
	setbuf(stdout,NULL);
	printf("Enter the limit\n");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d\t",n*2);
			n=n+1;
		}
		printf("\n");

	}

	return EXIT_SUCCESS;
}
