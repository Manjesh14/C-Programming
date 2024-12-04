#include<stdio.h>
int main(){
    int n,a;
    printf("Enter number of rows    : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int b = 1; b <= i; b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}