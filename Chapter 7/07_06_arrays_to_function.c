#include<stdio.h>
void print_array(int *ptr, int n){
    for(int i=0; i<n; i++){
        printf("The value of element %d is %d\n", i+1, *(ptr+i)); //Here *ptr means , it is taking the address of 1. Then *ptr+i
                                                                   //means, it is taking the address of the next integer like 66..88..
                                                                 // in a loop nxt.
    }
    ptr[2]=47;                                                    //This value will be change in arrays of main  as well.
}
// void print_array(int ptr[], int n){
//     for(int i=0; i<n; i++){
//         printf("The value of element %d is %d\n", i+1, ptr[i]);
//     }
// }

int main(){
int array[]={1,66,88,99,77,44,88,99,11,22};
print_array(array,10 );
printf("%d", array[2]);
return 0;
}