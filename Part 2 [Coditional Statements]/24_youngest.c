#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the age of Ram   : ");
    scanf("%d",&a);
    printf("Enter the age of Shyam : ");
    scanf("%d",&b);
    printf("Enter the age of Ajay  : ");
    scanf("%d",&c);
    if (a<b && a<c)
    {
        printf("Ram is the youngest one");
    }
    if (b<a && b<c)
    {
        printf("Shyam is the youngest one");
    }
    if (c<b && c<a)
    {
        printf("Ajay is the youngest one");
    }
    return 0;
}