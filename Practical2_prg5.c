#include<stdio.h>
void main()
{
	int A[10],i,odd=0,even=0,p=0,n=0;
	printf("Enter the inputs for array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
		if (A[i]%2==0)
		even++;
		if(A[i]%2!=0)
		odd++;
		if(A[i]>=0)
		p++;
		if(A[i]<0)
		n++;
	}
	printf("\nThe array is :\n");
	for(i=0;i<10;i++)
	printf("%d ",A[i]);
	printf("\nThe number of even inputs is %d\n",even);
	printf("The number of odd inputs is %d\n",odd);
	printf("The number of inputs greater than zero is %d\n",p);
	printf("The number of inputs less than zero is %d\n",n);
	
}
