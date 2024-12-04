#include<stdio.h>
int fibo(int n){
    if (n <= 2) return 1;
    return fibo(n-1) + fibo(n-2)  ;  
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a = fibo(n);
    printf("The fibonaccie number of the n th digit is %d", a);
}