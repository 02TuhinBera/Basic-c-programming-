#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number;
    srand(time(0));
    number = rand(); //if we want to generate a number which is between 1 to 100, then----->
                     // number = rand()%100+1; or //random_num = (rand()%100)+1;
    printf("The number is %d\n", number);
    
    return 0;
}