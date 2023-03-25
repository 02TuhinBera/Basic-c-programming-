#include<stdio.h>
void change(int b);
int main(){
    int b;
    b = 344;
    printf(" The value of b before change is %d\n", b);// Main function "b" is not equal to the Change function "b"
    change(b);
    printf(" The value of b after change is %d\n", b);
    
    return 0;
}
void change(int b){
    b = 77;
}