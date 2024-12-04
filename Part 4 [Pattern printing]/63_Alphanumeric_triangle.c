#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            a=65;
            for (int j = 1; j <= i; j++)
            {
                printf("%c ",a);
                a++;
            }
        }
        if (i%2!=0)
        {
            a=1;
            for (int j = 1; j <= i; j++)
            {
                printf("%d ",a);
                a++;
            }
        }
        printf("\n");
    }
    return 0;
}