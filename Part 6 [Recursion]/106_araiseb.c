#include<stdio.h>
int power(int n, int a){
    if (a==0){
        return 1;
    }
    return n * power(n, a-1);
}
int main(){
    int n,a;
    printf("ENter the base : ");
    scanf("%d",&n);
    printf("Enter the power : ");
    scanf("%d", &a);
    int b= power(n,a);
    printf("The answer is = %d", b);
}