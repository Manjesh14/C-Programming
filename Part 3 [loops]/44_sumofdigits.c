#include<stdio.h>
int main(){
    int a,n,sum=0,last;
    printf("Enter a number : ");
    scanf("%d", &n);
    while (n!=0)
    {
        a=n;
        n=n/10;
        last=a-(n*10);
        sum=sum+last;
    }
    printf("Sum of digits is = %d", sum);
    return 0;
}