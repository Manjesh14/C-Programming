#include<stdio.h>
int main(){
    int n,sum=0,b=1,a=1,i;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    for ( i = 1; i <=n-2; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
    if (n==1 || n==2)
    {
        printf("The %dth fibnicci is = 1",n);
    }
    else
        printf("The %dth fibnicci is = %d",n,sum);
    return 0;
}