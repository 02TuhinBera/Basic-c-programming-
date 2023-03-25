#include<stdio.h>
int main(){
 FILE *ptr;
 ptr=fopen("putcdemo.txt", "w");
 putc('C', ptr);
 putc('h', ptr);
 putc('u', ptr);
 putc('t', ptr);
 putc('i', ptr);
 putc('y', ptr);
 putc('e', ptr);
 fclose(ptr);
 return 0;
}