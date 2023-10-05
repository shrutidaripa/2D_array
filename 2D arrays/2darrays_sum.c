#include<stdio.h>
int main()
{
	int i,j,n,sum=0,a[2][3];
	printf("enter the elements of array:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
	}
}
printf("the matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
		printf("%d\t",a[i][j]);
		sum=sum+a[i][j];
	    }
	printf("\n");
}
 printf("the sum :%d",sum);
 return 0;
}
