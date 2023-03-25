#include<stdio.h>
#include<string.h>
int main(){           //strcmp() lib. fuction is used to compare between the two ASCII value of this words
char st1[]="Hell";    //Here strcmp(st2, st2) means st1-st2.
char st2[]="Hello";
//char *st2="Tuhin";
int value=strcmp(st1, st2);
printf("Now the value is %d", value);
return 0;
}