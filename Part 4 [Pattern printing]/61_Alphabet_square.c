#include<stdio.h>
#include<conio.h>
int main(){
    int n,a;
    printf("Enter the number of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        a=65;
        for (int j = 1; j <= n; j++)
        {
            printf("%c ",a);
            a++;
        }
        printf("\n");
    }
    
    return 0;
    getch();
}