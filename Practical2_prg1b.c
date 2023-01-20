#include<stdio.h>
int increment(int *a)
{
	*a+=100;
//	printf("The incremented value is %d",*a);
	//return *a;
}
void main()
{
	int n;
	printf("Enter an integer\n");
	scanf("%d",&n);
	printf("The value before incrementing is %d\n",n);
	increment(&n);
	printf("The incremented value is %d",n);
}
