#include<stdio.h>
int main(){
    int a=0,n,last,sum,c;
    printf("Enter a number : ");
    scanf("%d", &n);
    c=n;
    while (n>0)
    {
        a=a*10;
        a=a+(n%10);
        n=n/10;
    }
    sum=a+c;
    printf("Sum of the number and it's reverse is = %d", sum);
    return 0;
}