#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)   //Base Case
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("The factorial of %d is = %d", n, result);
    return 0;
}