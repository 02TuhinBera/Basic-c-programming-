#include<stdio.h>
#include<string.h>
int main(){
//char *st="Fuck";
char st1[]="Fuck";  //Suppose, here (st1=source) and (st2=target), we are giving some strings to the source and target copy that source.
char st2[47];
strcpy(st2, st1);
printf("Now the st2 is %s", st2);
return 0;
}