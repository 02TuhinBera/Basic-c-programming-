#include<stdio.h>

int main(){
    int principle = 100, rate = 4, year =2;
    int simpleInterest = (principle*rate*year)/100;
    printf("the value of the simpleInterest is %d", simpleInterest);
    return 0;
}