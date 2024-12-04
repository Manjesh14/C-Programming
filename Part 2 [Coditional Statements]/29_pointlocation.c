#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the cordinates of (x1,y1) : ");
    scanf("%d%d", &x,&y);
    if (x==0 && y==0)
    {
        printf("points is a origin");
    }
    else if (x==0)
    {
        printf("Point lies on y axis");
    }
    else if (y==0)
    {
        printf("Point lies on x axis");
    }
    else
    {
        printf("the point neither lies on x or y nor origin");
    }
    return 0;
}