#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
if(n&1)
{
   printf("Least Significant Bit");
}
else
{
   printf("Not Least Significant Bit"); 
}
return 0;
}
