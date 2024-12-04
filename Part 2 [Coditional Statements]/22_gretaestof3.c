#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 distinct numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        printf("The %d number is gratest",a);
    }
    if (b>a && b>c)
    {
        printf("The %d number is gratest",b);
    }
    if (c>b && c>a)
    {
        printf("The %d number is gratest",c);
    }
    return 0;
}