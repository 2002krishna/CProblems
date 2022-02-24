#include <stdio.h>

int main()
{
    int number, n, bitStatus;
    scanf("%d", &number);
    scanf("%d", &n);

    bitStatus = (number >> n) & 1;

    printf("The %d bit is set to %d", n, bitStatus);

    return 0;
}
