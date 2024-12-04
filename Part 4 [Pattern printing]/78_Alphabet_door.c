#include<stdio.h>
int main(){
    int n,space=1,b,c;
    printf("Enter the number of rows : ");
    scanf("%d",&n);
    b=((n*2)-1)+64;
    c=n+1+64;
    for (int i = 1; i <= n; i++)
    {
        if (i==1)
        {
            for (int j = 1+64; j <= ((n*2)-1)+64; j++)
            {
                printf("%c",j);
            }
        }
        else{
            for (int k = (n-i+1); k >=1; k--)
            {
                printf("%c",(n-i+1-k+1)+64);
            }
            for (int l = 1; l <= space ; l++)
            {
                printf(" ");
            }
            space+=2;
            for (int p = c; p <= ((n*2)-1)+64; p++)
            {
                printf("%c",p);
            }
            c++;
        }
                
        printf("\n");
    }
    return 0;
}