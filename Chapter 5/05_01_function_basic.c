#include<stdio.h>
void display(); //Function Prototype
int main(){
    int a;
    printf("Initializing display function\n");
    display();
    printf("Display function finished it's work");
    return 0;
}
void display(){
    printf("This is display\n");
}