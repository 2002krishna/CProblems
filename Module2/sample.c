#include <stdio.h>
int fact (int n)
{
    if (n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
   int g,b,result;
   scanf("%d %d",&g,&b);
   if(g+b > 10 || b < g)
   {
	printf("Invalid");
	}
	else{
   result = fact(b) * ((fact(b+1))/(fact((b+1)-g)));
   printf("%d",result);
   }
}