#include <stdio.h>
int nSum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int res = n + nSum(n - 1);
    return res;
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int sum = nSum(n);
    printf("The sum of n numbers id = %d ", sum);
    return 0;
}