#include<stdio.h>
void encrypt(char *c){
    char *ptr=c;  //Here we are declaring *ptr and initializing the  value to 'c'.
    while(*ptr!='\0'){
        *ptr=*ptr+1; //if you want to understand this line, then you have to watch the harry's video again.
        ptr++;
    }
}
int main(){
char c[]="Come to my room";
encrypt(c);
printf("Encrypted string is: %s", c);
return 0;
}