#include<stdio.h>

int main(){
    int length, breadth;
    printf("What is the length of this rectangle\n");
    scanf("%d", &length);
    printf("What is the breadth of this rectangle\n");
    scanf("%d", &breadth);
    printf("The area of our rectangle is %d", length*breadth);
    return 0;
}

