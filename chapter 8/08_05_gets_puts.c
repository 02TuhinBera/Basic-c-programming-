#include<stdio.h>
int main(){
char s[47];
printf("Enter your name:");
gets(s);                  //Here "gets(s)" help you to write multiple words in a program.
puts(s);                 //Here "puts(s)" help you to print the muntiple words without writing printf(""); function.
// printf("Your name is %s", s);
return 0;
}