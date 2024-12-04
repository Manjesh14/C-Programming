#include<stdio.h>
int power(int n, int a){
    if (n==0) return 1;
    if (a==1){
        return n;
    }
    if (a %2 ==0 ) return power(n, a/2) * power(n, a/2);
    else{
        return power(n, a/2) * power(n, a/2)* n;
    }
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