/*program 1a*/
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
/*program1b*/
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
/*program 2*/
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
}
/*program 3*/
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