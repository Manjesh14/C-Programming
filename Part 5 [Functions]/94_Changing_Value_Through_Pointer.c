#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    *x=7;           // Value of a is Changed
    printf("%d\n",a);
    return 0;
} 