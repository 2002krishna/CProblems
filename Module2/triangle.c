#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    
if (a==b&&b==c&&c==a)
{
    printf("Equilateral triangle");
}
else if (a==b||b==c||c==a)
{
   printf("Isoscles triangle");
}
else
{
    printf("scalene trianle");
}
}
