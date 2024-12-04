#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int a,b,sum;
    printf("Enter a number : ");
    scanf("%d",&a);
    
    printf("Enter a number : ");
    scanf("%d",&b);
    sum=add(a,b);
    printf("Sum of a and b is = %d",sum);
}