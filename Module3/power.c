#include <stdio.h>
int main() {
    int base, exp;
    double result = 1.0;
    scanf("%d", &base);
    scanf("%d", &exp);

    for(i=1;i<=exp;i++)
	{
        result = result * base;
    }
    printf("Answer = %f", result);
    return 0;
}