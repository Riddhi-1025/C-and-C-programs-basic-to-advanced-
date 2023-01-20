#include<stdio.h>
int fact(int n)
{
	int fac=1;
	for(;n>0;n--)
	fac*=n;
	return fac;
}
int main()
{
	int m,f;
	printf("Enter a number\n");
	scanf("%d",&m);
	f=fact(m);
	printf("The factorial is %d\n",f);\
}
