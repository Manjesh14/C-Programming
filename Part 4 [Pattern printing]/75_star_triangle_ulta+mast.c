#include<stdio.h>
int main(){
    int n,a=1,space=0;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {   
        for (int k = 1; k <= space; k++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        space+=1;
        printf("\n");
    }
    return 0;
}