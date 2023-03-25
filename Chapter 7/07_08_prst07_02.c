#include<stdio.h>
void printTable(int *mulTable, int num, int n){

    printf("The multiplication table of %d:\n", num);
    for(int i=0; i<n; i++){
        mulTable[i]=num*(i+1);
    }
    for(int i=0; i<10; i++){
        printf("%dx%d=%d\n",n, i+1, mulTable[i]);
    }
    printf("*******************************************\n");
}
    


int main(){
int mulTable[3][10];
printTable(mulTable[0], 2, 10);
printTable(mulTable[1], 7, 10);
printTable(mulTable[2], 9, 10);

return 0;
}