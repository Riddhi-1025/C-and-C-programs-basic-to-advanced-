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
