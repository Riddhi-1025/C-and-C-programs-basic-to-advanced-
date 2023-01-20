#include<stdio.h>
void main()
{
	int no, factorial;
	printf("Enter a number\n");
	scanf("%d",&no);
    printf("The factorial is %ld",fact(no));
}
int fact(int n)
{
	if(n>=1)
	{
  return n*fact(n-1);
}
else
return 1;
}
