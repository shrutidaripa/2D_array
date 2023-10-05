#include<stdio.h>
int main()
{
	int i,j,a[2][3],b[2][3],c[2][3],sum=0;
	printf("the elements in 1st matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&a[i][j]);
		}
	}
	printf("the 1st matrix is:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		printf("the elements in 2nd matrix:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d\n",&b[i][j]);
		}
	}
	printf("the 2nd matrix is:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("the addition of both the array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=a[i][j]+b[i][j];
			sum=c[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	return 0;
}
