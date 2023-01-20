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

