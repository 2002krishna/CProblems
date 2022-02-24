#include<stdio.h>  
int main()    
{    
int n,r=0,remin,original;
scanf("%d", &n);
original=n;
while(n!=0)
{
 remin = n%10;
 r=r*10+remin;
 n=n/10;
}
 if(original==r)
 {
     printf("Palindrome");
 }
else 
 {
     printf("Not palindrome");
 }

}
