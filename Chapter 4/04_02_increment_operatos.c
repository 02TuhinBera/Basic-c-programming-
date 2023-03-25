#include<stdio.h>

int main(){
    int i = 5;
    printf("The value of i++ is %d\n", i++); //here first print nxt increment.
    printf("The value of i++ is %d\n", ++i); //here first increment nxt print.
    printf("The value of i is %d\n", i);
    return 0;
}