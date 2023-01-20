/*program 1*/
#include<stdio.h>
int main()
{
	float t,c;
	printf("Enter the temp in degree celsius\n");
	scanf("%f",&c);
	t=((9*c)/5)+32;
	printf("The temperature in Farenheit is %f\n",t);
}
/*program2*/
#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("Enter a five digit number\n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum+=r;
		n/=10;
	}
	printf("The sum of digits is %d\n",sum);
}
/*already solved too long to solve again :)*/
/*program 4*/
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
/*program 5*/
#include<stdio.h>
int main()
{
	int n=0,m,r,sum=0;
	printf("The armstrong numbers between 0 and 500 are:\n");
	while(n<=500)
	{
		m=n;
		sum=0;
		while(m)
		{
			r=m%10;
			sum+=(r*r*r);
			m/=10;
		}
		if(n==sum)
		printf("%d ",n);
		n++;
	}
}

