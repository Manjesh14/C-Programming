#include <stdio.h>
void printnum(int n)
{
    printf("%d \n", n);
    if (n == 1)
    {
        return;
    }

    printnum(n - 1);
    return;
}
int main()
{
    int n;
    printf("Entre the number : ");
    scanf("%d", &n);
    printnum(n);
    return 0;
}