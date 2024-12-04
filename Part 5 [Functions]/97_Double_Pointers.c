#include<stdio.h>
int main(){
    int a=10;
    int* x=&a;
    int** y=&x;
    printf("%p\n",&x);
    printf("%p\n",y);
    printf("%d\n",*x);
    printf("%d\n",**y);
    return 0;
}