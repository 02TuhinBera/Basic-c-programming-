#include<stdio.h>
int main(){
char *ptr="Tuhin Bro";      //If we use pointer, then we can re-initialized any words or strings.
// char ptr[]="Tuhin Bro"; // If we use arrays, we can't re-initialized any other words or strings.
ptr="Nilu Da";
printf("%s", ptr);        // This is the difference.
return 0;
}