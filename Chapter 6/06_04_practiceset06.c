#include<stdio.h>
void multiply_by_10(int num){
    num*=10;
}
int main(){
    int num=5;
    printf("Before: %d\n", num);
    multiply_by_10(num);     //Solving question no. 3 by using call by value(Function Call type). 
    printf("After: %d\n", num);
    
    return 0;
}