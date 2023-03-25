#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
// Sizeof operator in c
// printf("The size of an int on my pc is %d\n", sizeof(int));
// printf("The size of an float on my pc is %d\n", sizeof(float));
// printf("The size of an char on my pc is %d\n", sizeof(char));
ptr=(int *) malloc(6 * sizeof(int));
for(int i=0; i<6; i++){
    printf("Enter the value of %d element:\n", i); //If we don't give any value from the user as an input, it initial value will bb
    scanf("%d", &ptr[i]);                           // chose randomly.
}
for(int i=0; i<6; i++){
    printf("The value of %d element is: %d\n", i, ptr[i]);
}
 return 0;
}