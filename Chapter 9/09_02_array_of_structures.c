#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=100.58;
    strcpy(facebook[0].name, "Tuhin");

    facebook[1].code=100;
    facebook[1].salary=100.58;
    strcpy(facebook[1].name, "Nilu");

    facebook[3].code=100;
    facebook[3].salary=100.58;
    strcpy(facebook[3].name, "Ganesh");

return 0;
}