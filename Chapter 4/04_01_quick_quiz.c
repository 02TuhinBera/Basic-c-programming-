#include<stdio.h>

int main(){
    int i=0;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    do{                                    //i+1, it's putput are 0,1,2,3,4,5,6,7,8,............so on
        printf("The number is %d\n", i+1);// If we do it another way like (i++), it will us a another out put like 0, 2,4,6,8....
        i++;                              // something like this.
    }while(i<n);
    
    return 0;
}