#include<stdio.h>
int main ()
{
int first,second,temp;
scanf("%d %d", &first,&second);
temp=first;
first=second;
second=temp;
printf("swap of two numbers%d\n%d",first,second );
}
