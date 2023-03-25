#include<stdio.h>
void printAdd(int a){
    printf("The address of variable i is %u\n", &a);
}
int main(){
    int i=4;
    printf("The value of variale i is %d\n", i);
    printAdd(i);   //The addresss will never be same but the value will be the same.
    printf("The address of variale i is %u\n", &i);

    return 0;
}