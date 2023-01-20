#include<stdio.h>
int main()
{
	int A[3][3],B[3][3],C[3][3],i,j,k;
	printf("Enter the 9 elements of A matrix\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	scanf("%d",&A[i][j]);
	C[i][j]=0;
}
	printf("Enter the 9 elements of B matrix\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&B[i][j]);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			C[i][j]+=A[i][k]*B[k][j];
		}
	}
	printf("The resultant matrix of matrix multiplication is :\n");
		printf("Enter the 16 elements of the matrix\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		printf("%2d ",C[i][j]);
	}
	printf("\n");
}
}
