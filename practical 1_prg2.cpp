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
