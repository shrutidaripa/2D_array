#include<stdio.h>
int main()
{
	int i,j,a[2][3],b[2][3],c[2][3],k;
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
	printf("the multiplication of both the matrix: ");
	{
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
		int	sum=0;
				for(k=0;k<3;k++)
				{
				sum=sum+(a[i][j]*b[j][i]);
			}
			   sum=c[i][j];
				printf("%d\t",c[i][j]);
				printf("\n");
			}
		}
	}
}
	
