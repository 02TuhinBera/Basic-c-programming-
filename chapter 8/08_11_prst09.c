#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;
    int i, len, found = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to search for: ");
    scanf("%c", &ch);
    
    len = strlen(str);
    
    for (i = 0; i < len; i++) {
        if (str[i] == ch) {
            found = 1;
            break;
        }
    }
    
    if (found) {
        printf("The character '%c' is present in the string.", ch);
    } else {
        printf("The character '%c' is not present in the string.", ch);
    }
    
    return 0;
}
