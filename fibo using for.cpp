#include<stdio.h>
int fibo(int n)
{
   int a=0,b=1,c;
   for(int i=0;i<n;i++)
   {
   	printf("%d ",a);
   	c=a+b;
   	a=b;
   	b=c;
   }
}
int main()
{
	int t;
	printf("Enter the no. of terms\n");
	scanf("%d",&t);
	printf("Fibonacci series of n terms is :\n");
	fibo(t);
}
