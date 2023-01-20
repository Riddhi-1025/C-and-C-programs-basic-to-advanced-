/*program 1*/
#include<stdio.h>
int main()
{
	float t,c;
	printf("Enter the temp in degree celsius\n");
	scanf("%f",&c);
	t=((9*c)/5)+32;
	printf("The temperature in Farenheit is %f\n",t);
}
