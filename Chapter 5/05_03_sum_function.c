#include<stdio.h>
//Sum is a function which take a input a and b and return a integer c output.
int sum(int a, int b); // Function protype declaration.
int main(){
    int c;
    c = sum(2,15); // Function call.
    printf("The vlue of c is %d\n", c);
    
    return 0;
}
int sum(int a, int b){
    int result;
    result = a+b;
    return result;
}