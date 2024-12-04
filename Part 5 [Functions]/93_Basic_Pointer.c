#include<stdio.h>
int main(){
    int a=10;
    printf("%d\n",a);
    printf("%p\n",&a);
    int* x=&a;
    printf("%d\n",x);
    printf("%p\n",&x);
    printf("%d\n",&x);
    printf("%d",*x);
    return 0;
}