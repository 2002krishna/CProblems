#include<stdio.h>

int main()

{
	int no1,no2;
	int *ptr1,*ptr2;	
	int sum,sub,mult;
	float div;   
    scanf("%d",&no1);
    scanf("%d",&no2);

    ptr1=&no1;
    ptr2=&no2;
    sum=(*ptr1) + (*ptr2);
    sub=(*ptr1) - (*ptr2);
    mult=(*ptr1) * (*ptr2);
    div=(*ptr1) / (*ptr2);

    printf("sum= %d\n",sum);
    printf("subtraction= %d\n",sub);
    printf("Multiplication= %d\n",mult);
    printf("Division= %f\n",div);

    return 0;
}