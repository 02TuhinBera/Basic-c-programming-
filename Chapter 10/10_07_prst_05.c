#include<stdio.h>
int main(){
FILE *ptr;
int num;
ptr=fopen("last.txt", "r");
fscanf(ptr, "%d", &num);
printf("The number is %d", num);
ptr=fopen("last.txt", "w");
fprintf(ptr, "%d\n", 2*num);
 return 0;
}