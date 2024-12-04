#include<stdio.h>
int main(){
    int a,n,sum=0,last;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n!=0)
    {
        last=n%10;
        if (last%2==0)
        {
            sum=sum+last;
        }
        n=n/10;
    }
    printf("Sum of even digits is = %d", sum);
    return 0;
}