#include<stdio.h>
int sum(int a, int b);
int main(){
    int a=4, b=7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The value of a+b is %d\n", sum(a,b));
    printf("The value of a and b after function is %d and %d\n", a,b);
    return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    a=9656;// Like the recursion 
    b=532145;
    return c;
}