#include<stdio.h>
int main(){
    int n,space=1,b,c;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    b=(n*2)-1;
    c=n+1;
    for (int i = 1; i <= n; i++)
    {
        if (i==1)
        {
            for (int j = 1; j <= (n*2)-1; j++)
            {
                printf("%d",j);
            }
        }
        else{
            for (int k = n-i+1; k >= 1; k--)
            {
                printf("%d",n-i+1-k+1);
            }
            for (int l = 1; l <= space ; l++)
            {
                printf(" ");
            }
            space+=2;
            for (int p = c; p <= (n*2)-1; p++)
            {
                printf("%d",p);
            }
            c++;
        }
                
        printf("\n");
    }
    return 0;
}