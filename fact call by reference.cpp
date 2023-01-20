#include<stdio.h>
int fact(int n,int *fac)
{
	for(;n>0;n--)
	(*fac)*=n;
}
int main()
{
	int m,f;
	printf("Enter a number\n");
	scanf("%d",&m);
	fact(m,&f);
	printf("The factorial is %d\n",f);\
}
