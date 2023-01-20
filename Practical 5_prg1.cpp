#include<stdio.h>
int shift(int B[5],int m)
{
	int temp,i,k;
	k=B[0];
	for(i=0;i<5;i++)
	{
		temp=B[i];
		B[i]=B[i+1];
		B[i-1]=temp;
		
	}
	B[4]=k;
	
	
}
int main()
{
    int A[5];
	printf("Enter the elements of the array\n");
	for(int i=0;i<5;i++)
	scanf("%d",&A[i]);
    shift(A,5);
    printf("The new array is \n");
    for(int i=0;i<5;i++)
    printf("%d ",A[i]);
    return 0;
	
}
