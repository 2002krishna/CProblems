#include<stdio.h>
int main()
{
 float maths,physics,english,cse,mech;
 float total,average,percentage;
 printf("Enter the marks\n");
 scanf("%f %f %f %f %f", &maths,&physics,&english,&cse,&mech);
 total=maths+physics+english+cse+mech;
 average=total/5;
 percentage=(total*100)/500;
 printf("total:");
 printf("%0.2f\n", total);
 printf("average:");
 printf("%0.2f\n", average);
 printf("percentage:");
 printf("%0.2f\n", percentage);
 }
