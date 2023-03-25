#include<stdio.h>
#include<math.h>
int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);
    printf("The value of the area is %f\n", pow(side,2));
    return 0;
}