#include<stdio.h>
int main(){
    int n,a=0,b=1;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++){
            if (i==j || (i-j)%2==0)
            {
                printf("%d ",b);
            }
            else
            {
                printf("%d ", a);
            }
        }
            
        printf("\n");
    }
    return 0;
}       