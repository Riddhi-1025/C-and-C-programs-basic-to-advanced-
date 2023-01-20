#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Fibonacci Series: \n");
	for(i=0;i<n;i++)
	printf("%d ",Fibo(i));
}
int Fibo(int i)
{   
    if(i==0)
    return 0;
    else if(i==1)
    return 1;
    else
    return (Fibo(i-1)+Fibo(i-2));
		
}
