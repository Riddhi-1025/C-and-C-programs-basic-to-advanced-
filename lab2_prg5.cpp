#include<stdio.h>
int main()
{
	int arr[6],sum=0,avg;
	printf("Enter the marks in 6 subjects\n");
	for(int i=0;i<6;i++)
	{
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/6;
	printf("The average marks are %d\n",avg);
}
