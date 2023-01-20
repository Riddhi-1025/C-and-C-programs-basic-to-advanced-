#include<stdio.h>
#include<math.h>
int mean,s_d,sum;
void operation(int a,int b,int c, int d, int e,int *sum,int *mean,int *s_d)
{
	*sum=a+b+c+d+e;
	*mean=*sum/5;
	*s_d=sqrt((((a-(*mean))*(a-(*mean)))+ ((b-(*mean))*(b-(*mean)))+ ((c-(*mean))*(c-(*mean)))+ ((d-(*mean))*(d-(*mean)))+ ((e-(*mean))*(e-(*mean))))/5);
}
void main()
{
	int v,w,x,y,z;
	printf("Enter 5 integers\n");
	scanf("%d%d%d%d%d",&v,&w,&x,&y,&z);
	operation(v,w,x,y,z,&sum,&mean,&s_d);
	printf("The sum,mean and standard deviation are:\n%d %d and %d",sum,mean,s_d);
}
