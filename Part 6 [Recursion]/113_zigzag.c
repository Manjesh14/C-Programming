#include <stdio.h>
void zigzag(int n){
    if(n==0) return ;
    printf("%d\n",n);
    zigzag(n-1);
    printf("%d\n",n);
    zigzag(n-1);
    printf("%d\n",n);
}
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    zigzag(n);
    return 0;
}