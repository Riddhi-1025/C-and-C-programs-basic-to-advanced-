/*lab3*/
/*prg1a*/
#include<stdio.h>
int main()
{
	int A[15],t,i,count=0;
	printf("Enter 15 elements of the array\n");
	for(i=0;i<15;i++)
	scanf("%d",&A[i]);
	printf("Enter the number to be searched\n");
	scanf("%d",&t);
	for(i=0;i<15;i++)
	{
		if(A[i]==t)
		count++;
	}
	if(count==0)
	printf("Number not found\n");
	else
	printf("The number of times the element has occured is %d\n",count);
	return 0;
}
/*program1b*/
#include<stdio.h>
int main()
{
	int low,high,mid,temp,A[15],t,m,count;
	printf("Enter the elements of the array\n");
	for(int i=0;i<15;i++)
	scanf("%d",&A[i]);
		for(int i=0;i<15;i++)
	{
		for(int j=i+1;j<15;j++)
		{
			if(A[i]>A[j])
			{
			m=A[i];
			A[i]=A[j];
			A[j]=m;
		}
		}
	}
	printf("The sorted array is \n");
	for(int i=0;i<15;i++ )
	printf("%d ",A[i]);
	printf("\nEnter the element to be searched\n");
	scanf("%d",&t);
	for(low=0,high=14,mid=(high+low)/2;low<=high;mid=(high+low)/2)
	{
		if (t==A[mid])
		{
		printf("Element found at position %d\n",mid+1);
		break;
		}
		else if (t>A[mid])
		low=mid+1;
		else
		high=mid-1;
	}
}
/*program2*/
#include<stdio.h>
int main()
{
	int A[10],m;
	printf("Enter 10 elements of the array\n");
	for(int i=0;i<10;i++)
	scanf("%d",&A[i]);
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(A[i]>A[j])
			{
			m=A[i];
			A[i]=A[j];
			A[j]=m;
		}
		}
	}
	printf("The sorted array is \n");
	for(int i=0;i<10;i++ )
	printf("%d ",A[i]);
}
/*program3*/
#include<stdio.h>
int main()
{
	int A[10],m;
	printf("Enter 10 elements of the array\n");
	for(int i=0;i<10;i++)
	scanf("%d",&A[i]);
	for(int i=0;i<10;i++)
	{
		for(int j=i+1;j<10;j++)
		{
			if(A[i]>A[j])
			{
			m=A[i];
			A[i]=A[j];
			A[j]=m;
		}
		}
	}
	printf("The sorted array is \n");
	for(int i=0;i<10;i++ )
	printf("%d ",A[i]);
}
/*program 4*/
#include<stdio.h>
int main()
{
	int A[10],i,*small;
	printf("Enter 10 numbers\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&A[i]);
	}
	small=A;
	for(int i=0;i<10;i++)
	{
		if(A[i]< *small)
		*small=A[i];
	}
	printf("Smallest element in the array is %d\n",*small);
}
/*program 5*/
#include<stdio.h>
int main()
{
	int A[3][3],large,n,m;
	printf("Enter 9 elements of the array\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("The elements of the array are:\n");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%2d ",A[i][j]);
		}
		printf("\n");
	}
	
	large=A[0][0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(large<A[i][j])
			{
			large=A[i][j];
			m=i+1;
			n=j+1;
		}
		}
	}
	printf("The largest number is %d\n",large);
	printf("The row and column indices of the largest number respectively are %d and %d",m,n);
	
}
/*program 6*/
#include<stdio.h>
#include<math.h>
int main()
{
	//input all no.s in an array
   int A[100],i;
   for(i=0;i<100;i++)
   A[i]=i+1;
   printf("All the numbers from 1 to 100 are:\n");
   for(i=0;i<100;i++)
   printf("%d ",A[i]);
   //starting with 2nd entry set all its multiples to zero
   int limit=sqrt(100);
   for(i=1;i<=limit;i++)
   {
   	if(A[i]!=0)
   	{
   		for(int j=pow(A[i],2);j<=100;j=j+A[i])
   		{
   			A[j-1]=0;
		   }
	   }
   }
   printf("Sieve Eratosthenes Method\n");
   printf("All the prime numbers in the said range are:\n");
   for(i=1;i<100;i++)
   {
   	if(A[i]!=0)
   	printf("%d ",A[i]);
   }
   printf("\n");
}
/*program7*/
#include<stdio.h>
int main()
{
	int A[4][4],T[4][4];
	printf("Enter the elements of the array\n");
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	scanf("%d",&A[i][j]);
	printf("The elements of the array is\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%2d ",A[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			T[i][j]=A[j][i];
		}
	}
	printf("The transpose of the array is\n");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			printf("%2d ",T[i][j]);
		}
		printf("\n");
	}
	
}

