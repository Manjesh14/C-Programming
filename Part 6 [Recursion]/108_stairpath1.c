#include<stdio.h>
#include<conio.h>
int stair(int n){
    if (n <= 2) return n;
    return stair(n-1) + stair(n-2);  
}

int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int a = stair(n);
    printf("The fibonaccie number of the n th digit isnumber of ways =  %d", a);
}