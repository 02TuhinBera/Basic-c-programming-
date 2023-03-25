#include<stdio.h>
int main(){
int array[10];
//int *ptr=&array[0];
int *ptr=array;
ptr=ptr+2;
if(ptr==&array[2]){
    printf("This point to the same location in memory");
}
else{
    printf("This do not point to the same location in memory");
}
return 0;
}