#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int *) calloc(6, sizeof(int));
for(int i=0; i<6; i++){
    printf("Enter the value of %d element:\n", i);//If we don't give any value from the user as an input, it initial value will be 
                                                        // always 0.
    scanf("%d", &ptr[i]);
}
for(int i=0; i<6; i++){
    printf("The value of %d element is: %d\n", i, ptr[i]);
}
 return 0;
}