#include<stdio.h>

int sum(int x); // Declare the recursive function before main()

int main(){
    int n, result;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    result = sum(n);
    printf("The sum of first %d natural numbers is %d\n", n, result);
    return 0;
}

int sum(int x){
    if(x == 0){
        return 0;
    }
    else{
        return x + sum(x-1); // Recursively call sum function until base case is reached
    }
}
