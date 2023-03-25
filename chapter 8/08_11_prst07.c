#include<stdio.h>
void decrypt(char *c){
    char *ptr=c;  //Here we are declaring *ptr and initializing the  value to 'c'.
    while(*ptr!='\0'){
        *ptr=*ptr-1;
        ptr++;
    }
}
int main(){
char c[]="Dpnf!up!nz!sppn";
decrypt(c);
printf("Decrypted string is: %s", c);
return 0;
}