#include<stdio.h>
void main()
{
	int i,sum1=0,count;
	for(count=10;count>0;count--)
	{
		printf("Enter a number\n");
		scanf("%d",&i);
		Addition(&i,&sum1);
	}
	printf("The sum is %d",sum1);
}
void Addition(int*n,int*sum)
{
    *sum=*sum+*n;
}
