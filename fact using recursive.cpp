#include<stdio.h>
int fact(int n)
{
	if (n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int m;
	printf("Enter a number\n");
	scanf("%d",&m);
	printf("the factorial is %d",fact(m));
}
