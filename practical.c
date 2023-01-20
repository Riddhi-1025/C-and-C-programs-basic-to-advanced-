/*program 1a*/
#include<stdio.h>
int shift(int B[5],int m)
{
	int temp,i,k;
	k=B[0];
	for(i=0;i<5;i++)
	{
		temp=B[i];
		B[i]=B[i+1];
		B[i-1]=temp;
		
	}
	B[4]=k;
	
	
}
int main()
{
    int A[5];
	printf("Enter the elements of the array\n");
	for(int i=0;i<5;i++)
	scanf("%d",&A[i]);
    shift(A,5);
    printf("The new array is \n");
    for(int i=0;i<5;i++)
    printf("%d ",A[i]);
    return 0;
	
}
/*program 1b*/
#include<stdio.h>
int shift(int B[3][5],int m,int n)
{
	int temp,i,j,k;
	for(i=0;i<3;i++)
	{
		k=B[i][0];
		for(j=1;j<=4;j++)
		{
		temp=B[i][j-1];
		B[i][j-1]=B[i][j];
		//B[i][j-1]=temp;
}
B[i][4]=k;
	}
	
	
}
int main()
{
    int A[3][5];
	//printf("Enter the number of elements of the array\n");
	//scanf("%d",&n);
	printf("Enter the elements of the array\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("The array is\n");
	 for(int i=0;i<3;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		printf("%2d ",A[i][j]);
		}
		printf("\n");
	}
		shift(A,3,5);
    printf("The new array is\n");
    for(int i=0;i<3;i++)
    {
    	for(int j=0;j<5;j++)
    	{
    		printf("%2d ",A[i][j]);
		}
		printf("\n");
	}
	
}
/*Program 2*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char A[5],B[5];
	printf("Enter the elements\n");
	scanf("%s",&A);
	strcpy(B,A);
	strrev(B);
	if(strcmp(A,B)==0)
	printf("A pallindrome\n");
	else
	printf("Not a palindrome\n");
	return 0;
	
	
}
/*Program 3*/
#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char a[5],b[5],copy[5];
	printf("Enter a string\n");
	scanf("%s",&a);
	strcpy(b,a);
	printf("The string is %s and copied one is %s\n",a,b);
	if(strcmp(a,b)!=0)
	printf("shows error\n");
	else
	printf("The string shows no error\n");
	for(int i=0;i<=5;i++)
	{
		copy[i]=a[i];
	}
	printf("the copied string is %s\n",copy);
}
/*program 4*/
#include<stdio.h>
#include<string.h>
int main()
{
	char s[5];
	printf("Enter a string in lowercase\n");
	for(int i=0;i<=5;i++)
	scanf("%c",&s[i]);
	printf("string in uppercase is %s",strupr(s));
	for(int i=0;i<5;i++)
	{
		if(s[i]>='a'&&s[i]<='z')
		{
			s[i]=s[i]-32;
		}
	}
	printf("\nthe string in upper case is %s",s);
}
/*program 5*/
#include<stdio.h>
#include<string.h>
int main()
{
	int n,st,c=0;
	char s[20],a[n];
	printf("enter a string\n");
	scanf("%s",&s);
	printf("Enter the starting position of the part to be extracted\n");
	scanf("%d",&st);
	printf("Enter the number of characters\n");
	scanf("%d",&n);
	while(c<n)
	{
		a[c]=s[st+c-1];
		c++;
	}
	a[c]='\0';
	printf("The extracted part is %s",a);
	
	
}

