#include <stdio.h>
void printpattern(int n);
int main()
{
    int n = 3;
    printpattern(n);
    //for 1 line - 1 star, 2 lines - 3 stars, 3 lines - 5 stars.........(2n-1)....?
    return 0;
}
void printpattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printpattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++)
    {
        printf("*");
    }
    printf("\n");
}