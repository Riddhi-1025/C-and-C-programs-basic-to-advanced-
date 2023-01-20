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
