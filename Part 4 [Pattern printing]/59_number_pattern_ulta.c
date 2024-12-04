#include<stdio.h>
int main(){
    int n,a;
    printf("Enter number of rows    : ");
    scanf("%d",&n);
    for (int i = n; i >= 1; i--)
    {
        for (int b = 1; b <= i; b++)
        {
            printf("%d ",b);
        }
        printf("\n");
    }
    
    return 0;
}