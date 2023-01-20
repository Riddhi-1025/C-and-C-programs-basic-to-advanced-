#include<stdio.h>
int increment(int a)
{
	a+=100;
	return a;
}
void main()
{
	int n,r;
	printf("Enter an integer\n");
	scanf("%d",&n);
	r=increment(n);
	printf("The incremented value is %d",r);
}
