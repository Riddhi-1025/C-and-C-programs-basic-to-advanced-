#include<stdio.h>
int main()
{
	int A[5],B[5],C[5];
	printf("Enter 5 elements of A\n");
	for(int i=0;i<5;i++)
	scanf("%d",&A[i]);
	for(int i=0;i<5;i++)
	{
		B[i]=A[i];
		C[4-i]=A[i];
	}
	printf("The elements of copied array in the same order and reverse order are:\n");
	for(int i=0;i<5;i++)
	printf("%d ",B[i]);
	printf("\n");
	for(int i=0;i<5;i++)
	printf("%d ",C[i]);
	
	
}
