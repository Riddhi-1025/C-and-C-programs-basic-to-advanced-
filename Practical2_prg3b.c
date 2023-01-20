#include<stdio.h>
void main()
{
	int no, factorial;
	printf("Enter a number\n");
	scanf("%d",&no);
	factorial=fact(no);
	printf("Factorial of the number is %d\n",factorial);
}
int fact(n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
