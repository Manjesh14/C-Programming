#include<stdio.h>
#include<conio.h>
int maze(int n, int m){
    int rightways =0;
    int downways =0;
    if (n==1 && m==1) return 1;
    if (n==1)
    {
        rightways+=maze(n,m-1);
    }
    if(m==1){
        downways+=maze(n-1, m);
    }
    int totalways=rightways+downways;
    return totalways;
}

int main(){
    int n, m;
    printf("Enter the number of rows of maze : ");
    scanf("%d", &n);
    printf("Enter the number of columns of maze : ");
    scanf("%d", &m);
    int a = maze(n,m);
    printf("The number of ways =  %d", a);
}