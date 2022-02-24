#include<stdio.h>
int main()
{
 float p,t,r,si,ci;
 scanf("%f %f %f", &p,&t,&r);
 si=p*t*r/100;
 ci=p*(1+r)/100*t;
 printf("simple interest %f\n", si);
 printf("compound interest %f\n", ci);
}
