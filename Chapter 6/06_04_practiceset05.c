#include<stdio.h>

int main(){
    int i, *ptr,**ptr_ptr;
    i=47;
    ptr=&i;
    ptr_ptr=&ptr;
    printf("The value of the i is %d\n", **ptr_ptr);
    return 0;
}