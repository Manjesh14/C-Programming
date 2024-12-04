#include<stdio.h>
int main(){
    int n,sum,i=0;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    sum=0;
    while (i<=n)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        if (i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }

    if (n%2==0)
    {
        printf("\nThe Sum of series is = %d",(-1)*(n/2));
    }
    if (n%2!=0)
    {
        printf("\nThe Sum of series is = %d",((-1)*((n-1)/2))+n);
    }
    
    printf("\nThe sum of the series upto %d is = %d", n, sum);
    return 0;
}