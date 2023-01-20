#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	while(n>0)
	{
		fact*=n;
		n--;
	}
	printf("The factorial is %d",fact);
}
#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	do
	{
		fact*=n;
		n--;
	}while(n>0);
	printf("The factorial is %d",fact);
}
#include<stdio.h>
int main()
{
	int n,fact=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	for(;n>0;n--)
	{
		fact*=n;
	}
	printf("The factorial is %d",fact);
}


