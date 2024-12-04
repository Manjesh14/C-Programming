#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {   
        a=65;
        for (int k = 1; k <= (n-i)*2; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}