#include<stdio.h>

int main(){
    int a=47;
    int *ptr;
    ptr=&a;
    printf("The address of a is %u\n", &a);
    printf("The value  of a is %d\n", *ptr);
    return 0;
}