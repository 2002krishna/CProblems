#include <stdio.h>
#include <stdlib.h>


/* Function declarations */
int isEven(const int NUM);
int isPrime(const int NUM);


int main()
{
    FILE * fPtrIn,
         * fPtrEven, 
         * fPtrOdd, 
         * fPtrPrime;

    
    int num, success;
    fPtrIn   = fopen("data/numbers.txt", "r");
    fPtrEven = fopen("data/even-numbers.txt" , "w");
    fPtrOdd  = fopen("data/odd-numbers.txt"  , "w");
    fPtrPrime= fopen("data/prime-numbers.txt", "w");

    if(fPtrIn == NULL || fPtrEven == NULL || fPtrOdd == NULL || fPtrPrime == NULL)
    {
        exit(EXIT_FAILURE);
    }

    while (fscanf(fPtrIn, "%d", &num) != -1)
    {
        if (isPrime(num))
            fprintf(fPtrPrime, "%d\n", num);
        else if (isEven(num))
            fprintf(fPtrEven, "%d\n", num);
        else
            fprintf(fPtrOdd, "%d\n", num);

    }

    fclose(fPtrIn);
    fclose(fPtrEven);
    fclose(fPtrOdd);
    fclose(fPtrPrime);

    printf("Data written to files successfully.");


    return 0;
}

int isEven(const int NUM)
{
    return !(NUM & 1);
}

int isPrime(const int NUM)
{
    int i;  

    // Only positive integers are prime
    if (NUM < 0)
        return 0;
      
    for ( i=2; i<=NUM/2; i++ )    
    {    
        /*   
         * If the number is divisible by any number   
         * other than 1 and self then it is not prime  
         */    
        if (NUM % i == 0)    
        {  
            return 0;  
        }    
    }   
      
    return 1;  
}