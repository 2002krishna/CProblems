#include<stdio.h>
int main()
{
  int a,b;
  char ch;
  scanf("%c", &ch);
switch(ch)
{
    case '+':
    printf("%d", a+b);
    break;
    
    case '-':
    printf("%d", a-b);
    break;
    
    case '/':
    printf("%d", a/b);
    break;
    
    case '*':
    printf("%d", a*b);
    break;
}
}
