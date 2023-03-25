#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for(int i=n; i; i--){
        printf("The number is %d\n", i-1);
    }
    return 0;
}
