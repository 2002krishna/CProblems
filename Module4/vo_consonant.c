#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 // Maximum string size

void count_vo_con(int str[],int len)
{
	int vowel;
	int consonant;
	for(i=0; i<len; i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
            else
                consonant++;
        }
    }

    printf("Total number of vowel = %d\n", vowel);
    printf("Total number of consonant = %d\n", consonant);
}

int main()
{
    char str[MAX_SIZE];
    int i, len, vowel, consonant;
    gets(str);

    vowel = 0;
    consonant = 0;
    len = strlen(str);

    count_vo_con(str[],len);

    return 0;
}