#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee tuhin={100, 90.45, "Tuhin"};
    printf("Code is: %d\n", tuhin.code);
    printf("salary is: %.2f\n", tuhin.salary);
    printf("Name is: %s\n", tuhin.name);

return 0;
}