#include<stdio.h>
int main()
{
	int i,j,n,a[2][3];
	printf("enter elements:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&a[i][j]);	
		}
	}
	printf("the matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("the transpose matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
