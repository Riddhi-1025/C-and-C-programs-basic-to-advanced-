/*Lab 5*/
//program 1
#include<stdio.h>
#include<string.h>
int main()
{
	char name[5][10],tname[5][10],temp[10];
	int i,j;
	printf("Enter 5 names\n ");
	for(i=0;i<5;i++)
	{
		scanf("%s",name[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],temp);
			}
		}
	}
	printf("\nNames sorted in alphabetical order are:\n");
	for(i=0;i<5;i++)
	printf("%s\n",name[i]);
	
}
//program 2
#include<stdio.h>
struct student
{
	int r_n,year;
	char name[10],dept[10],c[10];
}s[5];
int year(int n)
{
	for(int i=0;i<5;i++)
	{
		if(s[i].year==n)
		printf("%s\n",s[i].name);
	}
}
int data(int r)
{
		for(int i=0;i<5;i++)
	{
		if(s[i].r_n==r)
		{
			printf("The details of the student are:\n");
			printf("%s\n%s\n%s\n%d\n",s[i].name,s[i].dept,s[i].c,s[i].year);
			
		}
	}
}
int main()
{
	int R,y;
	printf("Enter the details of 5 students in the order:\n Roll number, year of joining,name,department,course\n");
	for(int i=0;i<5;i++)
	{
		scanf("%d%d%s%s%s",&s[i].r_n,&s[i].year,s[i].name,s[i].dept,s[i].c);
	}
		printf("Enter the particular year\n");
		scanf("%d",&y);
		printf("The students for the entered year are:\n ");
		year(y);
		printf("Enter the roll number of the student whose details are to be displayed\n");
		scanf("%d",&R);
		printf("The student details are:\n");
		data(R);
		
}
//program3a
#include<stdio.h>
#include<string.h>
struct date{
  int day;
  char m[10];
  long int year;
}d1,d2;
int main()
{
	printf("Enter the day,month and year\n");
	scanf("%d%s%ld",&d1.day,&d1.m,&d1.year);
	printf("Enter the 2nd day month and year\n");
	scanf("%d%s%ld",&d2.day,&d2.m,&d2.year);
	if((d1.day==d2.day)&&(strcmp(d1.m,d2.m)==0)&&(d1.year==d2.year))
	printf("EQUAL\n");
	else
	printf("UNEQUAL\n");
	printf("%d",sizeof(date));
}
//program3b
#include<stdio.h>
#include<string.h>
union date{
  int day;
  char m[3];
  long int year;
}d1,d2;
int main()
{
	printf("Enter the day,month and year\n");
	scanf("%d%s%ld",&d1.day,&d1.m,&d1.year);
	printf("Enter the 2nd day month and year\n");
	scanf("%d%s%ld",&d2.day,&d2.m,&d2.year);
	if((d1.day==d2.day)&&(strcmp(d1.m,d2.m)==0)&&(d1.year==d2.year))
	printf("EQUAL\n");
	else
	printf("UNEQUAL\n");
	printf("%d",sizeof(date));
	
}
//typedef part similar
//program 4
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int n,*num,sum;
	float mean,stds,std;
	printf("Enter the value of n\n");
	scanf("%d",&n);
	num=(int*)malloc(n*sizeof(int));
	if(num==NULL)
{
	printf("cannot allocate memory\n");
}
    printf("Enter the inputs\n");
    for(int i=0;i<n;i++)
    scanf("%d",&num[i]);
    printf("The numbers are:\n");
    for(int i=0;i<n;i++)
    printf("%d ",num[i]);
    for(int i=0;i<n;i++)
    	sum+=num[i];
    mean=sum/n;
    for(int i=0;i<n;i++)
    {
    	stds+=abs(mean-num[i]);
    	std=stds/n;
	}
	printf("\nThe sum, mean and std are: %d ,%f, %f",sum,mean,std);
	free(num);
}
//program 5
#include <stdio.h>
int main()
{
 
 FILE *F1,*F2;
 char c;
 F1=fopen("f1.txt","r");
 F2=fopen("f2.txt","w");
 c=fgetc(F1);
 printf("%c",c);
 while(c!=EOF)
 {
 	printf("%c",c);
    fputc(c,F2);
    c = fgetc(F1);
}
 fclose(F1);
 fclose(F2);
 
}
//program 6
//combination of 1 and 4(similar)
//program 6
//replace struct by union
//program 8

