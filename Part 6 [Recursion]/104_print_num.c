// Using Extra Parameter

// #include <stdio.h>
// void printnum(int x, int n)
// {
//     if (x > n)
//     {
//         return;
//     }
//     printf("%d\n", x);
//     printnum(x + 1, n);
//     return;
// }
// int main()
// {
//     int n;
//     printf("Enter the Number : ");
//     scanf("%d", &n);
//     printnum(1, n);
//     return 0;
// }

// or

// Without Using Extra Variable or Parameter 
#include <stdio.h>
void printnum(int n)
{
    if (n == 0)
    {
        return;
    }

    printnum(n - 1);
    printf("%d\n", n);
    return;
}
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    printnum(n);
    return 0;
}