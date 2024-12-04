#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number : ");
    scanf("%d",&a);
    if (a%5==0)
    {
        if (a%3==0)
        {
            printf("The number is divisible by 5 and 3");
        }
    }
    else
    {
        printf("Not divisible by 3 and 5 both ");
    }
    return 0;
}