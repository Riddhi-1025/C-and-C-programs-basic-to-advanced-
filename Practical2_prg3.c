#include<stdio.h>
void main()
{
	int n;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	printf("Fibonacci Series: ");
	//printf("%d%d",0,1);
	Fibo(n);
}
void Fibo(int m)
{   int i;
    Fibo(m)=Fibo(m-1)+Fibo(m-2);
    Fibo(0)=0;
    Fibo(1)=1;
    for(i=0;i<=m;i++)
    printf("%d ",Fibo(i));
		
}
