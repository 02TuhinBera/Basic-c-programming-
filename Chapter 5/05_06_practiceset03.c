#include<stdio.h>
float force(float mass);
int main(){
    float mass;
    printf("Enter the value of mass in kgs\n");
    scanf("%f", &mass);
    printf("The value of the force in Newton is %.2f", force(mass));//Here %.2f,%.1f,%.0f,%.3f means how much decimal number we want.
    return 0;
}
float force(float mass){
    float result=mass*9.8;
    return result;
}