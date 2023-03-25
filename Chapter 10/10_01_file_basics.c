#include<stdio.h>
int main(){
 FILE *ptr;
 ptr=fopen("sample.txt", "r");  //-->reading the file.
//  ptr=fopen("sample.txt", "w");  //-->writing the file.
 return 0;
}