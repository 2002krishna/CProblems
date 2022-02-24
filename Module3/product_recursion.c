#include <stdio.h>
#include <stdlib.h>
int product(int,int);   //function prototype / declaration
int main()
{
    int num1,num2,result;
    scanf("%d %d",&num1,&num2);
    result=product(num1,num2);
    printf("%d\n",result);
    getch();
    return 0;
}
int product(int a, int b)  //function definition
{
    if(a<b)
    {
        return product(b,a);
    }
    else if(b!=0){
            return (a+product(a,b-1));
    }
    else{
        return 0;
    }
}