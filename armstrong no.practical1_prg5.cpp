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
