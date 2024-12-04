#include<stdio.h>
int main(){
    int n,a;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= (n+1)/2; i++)
    {   
        a=i-1;
        for (int k = 1; k <= (((n+1)/2)-i)*2; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <i*2; j++)
        {
            printf("* "); 
        }
        printf("\n");
    }
    for (int i = (n)/2; i >= 1; i--)
    {   
        a=i-1;
        for (int k = 1; k <= (((n+1)/2)-i)*2; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <i*2; j++)
        {
            printf("* "); 
        }
        printf("\n");
    }
    return 0;
}