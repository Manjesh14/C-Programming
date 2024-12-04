#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    //With third variable
    c=a;
    a=b;
    b=c;

    // Without third Variable
    // a=a+b;
    // b=a-b;
    // a=a-b;
    printf("a=%d ,b=%d",a,b);
    return 0;
}