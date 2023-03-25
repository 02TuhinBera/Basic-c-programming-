#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    //while(a>10){If the value of a is 11, then it will become a infinity loop}
    while(a<10){
        printf("%d\n",a);
        // || printf("The value of a is %d\n", a);
        a++;
    }
    return 0;
}