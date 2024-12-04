#include<stdio.h>
int main(){
    int n,fact=1,i,j=1;
    printf("Enter the number : ");
    scanf("%d",&n);
    while (j<=n)
    {
        for ( i = 1; i <= j; i++)
        {
            fact=fact*i;
        }
        printf("\nFactorial of %d = %d",j,fact);
        fact=1;
        j++;
    }
    
    return 0;
}