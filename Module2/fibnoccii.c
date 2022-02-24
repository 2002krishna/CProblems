#include<stdio.h>
int main()
{
    int a=1,b=1,n,s,i,c;
    scanf("%d", &n);
    if(n==1)
    {
        printf("%d", a);
    }
    else if(n==2)
    {
        printf("%d\n", a);
        printf("%d", b);
    }
    else 
    {
        printf("%d\n", a);
        printf("%d\n", b);
       for(i=3;i<=n;i++)
     {
         c=a+b;
         a=b;
         b=c;
     printf("%d\n", c);
     }
    }
}