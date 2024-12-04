#include<stdio.h>
int main(){
printf("Even Numbers : \n");
    for (int i = 0; i <=100; i++)
    {
        if (i%2==0)
        {
            printf("%d\t",i);
        }
    }
printf("\nOdd Numbers : \n");
    for (int a = 0; a <=100; a++)
    {
        if (a%2!=0)
        {
            printf("%d\t",a);
        }
    }
    return 0;
}