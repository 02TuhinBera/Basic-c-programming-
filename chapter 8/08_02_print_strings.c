#include<stdio.h>
int main(){
// char str[]="Tuhin";
char str[]={'T', 'u', 'h', 'i', 'n', '\0' };
char *ptr=str;
while(*ptr!='\0'){
    printf("%c", *ptr);
    ptr++;
}
return 0;
}