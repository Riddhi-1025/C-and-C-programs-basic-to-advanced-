#include<stdio.h>
int main()
{
	int A[10],m;
	printf("Enter 10 elements of the array\n");
	for(int i=0;i<10;i++)
	scanf("%d",&A[i]);
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(A[i]>A[j])
			{
			m=A[i];
			A[i]=A[j];
			A[j]=m;
		}
		}
	}
	printf("The sorted array is \n");
	for(int i=0;i<10;i++ )
	printf("%d ",A[i]);
}
