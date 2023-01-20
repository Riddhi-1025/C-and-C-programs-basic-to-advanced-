#include<stdio.h>
void main()
{
	int A[10],B[10],C[10],i,j,key;
	printf("Enter the inputs for array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
		B[i]=A[i];
	}
	printf("\nThe elements of A are: \n");
	for(i=0;i<10;i++)
	printf("%d ",A[i]);
	printf("\nThe elements of B are: \n");
	for(i=0;i<10;i++)
	printf("%d ",B[i]);
	for(i=0;i<10;i++)
	{
		C[i]=A[9-i];
	}
	printf("\nThe elements of C are:\n");
	for(i=0;i<10;i++)
	printf("%d ",C[i]);
	for(i=0;i<10;i++)
	for(j=i+1;j<10;j++)
	{
		if(A[i]>A[j])
		{
			key=A[i];
			A[i]=A[j];
			A[j]=key;
		}
	}
	printf("\nThe elements of array sorted in ascending order are:\n");
	for(i=0;i<10;i++)
	printf("%d ",A[i]);
}
