#include <stdio.h>
int main()
{
int a,b,rem;
scanf("%d",&a);
scanf("%d",&b);
rem=a-(a/b)*b;
printf("Remainder is = %d\n",rem);
return 0;
}
