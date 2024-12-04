#include<stdio.h>
int main(){
    int n,space=1;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        if (i==1)
        {
            for (int j = 1; j <= (n*2)-1; j++)
            {
                printf("*");
            }
        }
        else{
            for (int k = n-i+1; k >= 1; k--)
            {
                printf("*");
            }
            for (int l = 1; l <= space ; l++)
            {
                printf(" ");
            }
            space+=2;
            for (int p = n-i+1; p >= 1; p--)
            {
                printf("*");
            }
        }
                
        printf("\n");
    }
    return 0;
}