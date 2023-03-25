#include<stdio.h>
#include<string.h>
typedef struct employee{
    int code;
    float salary;
    char name[10];
}emp;
void show(emp emp1){
    printf("The code of employee is: %d\n", emp1.code);
    printf("The salary of employee is: %f\n", emp1.salary);
    printf("The name of employee is: %s\n", emp1.name);
}
int main(){
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;
    // Pointing ptr to e1
    ptr=&e1;
    // (*ptr).code=101;
    // Set the member value foe e1
    ptr->code=101;
    ptr->salary=10.11;
    strcpy(ptr->name, "Tuhin");
    show(e1);


return 0;
}