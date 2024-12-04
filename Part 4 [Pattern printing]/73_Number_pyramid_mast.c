#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {   
        a=i-1;
        for (int k = 1; k <= (n-i); k++)
        {
            printf(" ");
        }
        for (int j = 1; j <=i; j++)
        {
            printf("%d",j); 
        }
        for (int l = 1; l <= i-1; l++)
        {
            printf("%d",a);
                a--;
        }
        printf("\n");
    }
    return 0;
}