/*lab2 prg 1a*/
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
/*program 1b and c*/
#include<stdio.h>
int increment(int *a)
{
	*a+=100;
//	printf("The incremented value is %d",*a);
	//return *a;
}
void main()
{
	int n;
	printf("Enter an integer\n");
	scanf("%d",&n);
	printf("The value before incrementing is %d\n",n);
	increment(&n);
	printf("The incremented value is %d",n);
}
/*program 2*/
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
/*program 3a*/
#include<stdio.h>
int fact(int n)
{
	int fac=1;
	for(;n>0;n--)
	fac*=n;
	return fac;
}
int main()
{
	int m,f;
	printf("Enter a number\n");
	scanf("%d",&m);
	f=fact(m);
	printf("The factorial is %d\n",f);\
}
/*program 3b*/
#include<stdio.h>
int fact(int n,int *fac)
{
	for(;n>0;n--)
	(*fac)*=n;
}
int main()
{
	int m,f;
	printf("Enter a number\n");
	scanf("%d",&m);
	fact(m,&f);
	printf("The factorial is %d\n",f);\
}
/*program 3c*/
#include<stdio.h>
int fact(int n)
{
	if (n==0)
	return 1;
	else
	return n*fact(n-1);
}
int main()
{
	int m;
	printf("Enter a number\n");
	scanf("%d",&m);
	printf("the factorial is %d",fact(m));
}
/*program4a*/#include<stdio.h>
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
/*program 4b*/
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
/*4c is comparison of run time*/
/*program 5*/
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
/*prg6 a,b,c,d*/
#include<stdio.h>
void main()
{
	int A[10],i,odd=0,even=0,p=0,n=0;
	printf("Enter the inputs for array\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
		if (A[i]%2==0)
		even++;
		if(A[i]%2!=0)
		odd++;
		if(A[i]>=0)
		p++;
		if(A[i]<0)
		n++;
	}
	printf("\nThe array is :\n");
	for(i=0;i<10;i++)
	printf("%d ",A[i]);
	printf("\nThe number of even inputs is %d\n",even);
	printf("The number of odd inputs is %d\n",odd);
	printf("The number of inputs greater than zero is %d\n",p);
	printf("The number of inputs less than zero is %d\n",n);
	
}
/*program 7*/
#include<stdio.h>
int main()
{
	int A[5],B[5],C[5];
	printf("Enter 5 elements of A\n");
	for(int i=0;i<5;i++)
	scanf("%d",&A[i]);
	for(int i=0;i<5;i++)
	{
		B[i]=A[i];
		C[4-i]=A[i];
	}
	printf("The elements of copied array in the same order and reverse order are:\n");
	for(int i=0;i<5;i++)
	printf("%d ",B[i]);
	printf("\n");
	for(int i=0;i<5;i++)
	printf("%d ",C[i]);
	
	
}

