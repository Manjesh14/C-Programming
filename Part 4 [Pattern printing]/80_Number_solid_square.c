#include<stdio.h>
int main(){
    int n,a,b,min;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i<= (n*2)-1; i++)
    {
        for (int j = 1; j <= (n*2)-1 ;j++)
        {
            int a=i;
            int b=j;
            if (a>n)
            {
                a=2*n-i;
            }
            if (b>n)
            {
                b=2*n-j;
            }
            if (a<b)
            {
                min=a;
            }
            else
            {
                min=b;
            }
            printf("%d ",(n+1)-min);
            
        }
        printf("\n");
    }
    
    return 0;
}