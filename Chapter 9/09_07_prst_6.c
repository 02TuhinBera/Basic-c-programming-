#include<stdio.h>
typedef struct complex{
    int real;
    int img;
}comp;
void display (comp c){
    printf("The value of real part is %d\n", c.real);
    printf("The value of imaginary  part is %d\n", c.img);
}
int main(){
    comp complex_nums[5];
    for(int i=0; i<5; i++){
        printf("Enter the real value for %d num\n", i+1);
        scanf("%d", &complex_nums[i].real );
        printf("Enter the complex value for %d num\n", i+1);
        scanf("%d", &complex_nums[i].img );
         }
          for(int i=0; i<5; i++){
        display (complex_nums[i]);
         }

return 0;
}