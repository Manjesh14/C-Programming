#include<stdio.h>
int main(){
    int a=10;
    int* x=&a;
    int** y=&x;
    int*** z=&y;
    printf("%p\n",&y);
    printf("%p\n",z);
    printf("%d\n",**y);
    printf("%d\n",***z);
    return 0;
} 