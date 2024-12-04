#include <stdio.h>
void tower(int n, char s, char h, char d){
    tower(n-1,s,d,h);
    printf("%c --> %c",s,d);
    tower(n-1,h,s,d);
    return ;
}
int main()
{
    int n;
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    tower(n,'A','B','C');
    return 0;
}