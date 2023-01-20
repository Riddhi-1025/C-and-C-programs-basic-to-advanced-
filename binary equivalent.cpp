#include<stdio.h>
int find(int n)
{
	if(n==0)
	return 0;
	else
	return(n%2+10*find(n/2));
}
int main()
{
	int m;
	printf("Enter a number\n");
	scanf("%d",&m);
	printf("Binary equivalent is %d",find(m));
}
