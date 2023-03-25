#include<stdio.h>
int strlen(char *st){
    char *ptr=st;
    int len=0;
    while(*ptr!='\0'){
        len++;
        ptr++;
    }
    return len;
}
int main(){
char st[]="Tuhin";
int l=strlen(st);
printf("The value of this string is %d", l);
return 0;
}