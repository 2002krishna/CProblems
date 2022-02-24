#include <stdio.h>

int main()
{
    int m,n; 
    scanf("%d %d",&m,&n);  
    int arr[10][10]; 
    for(int i=0;i<m;i++) 
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int i = 0, j;
	scanf("%d",&i); //row for which max is required
    int max = 0;
   for ( j = 0; j < n; j++)
   {
	   if (arr[i][j] > max)
	   {
		  max = arr[i][j];
	   }
	}
    printf("%d \n", res[i]);
    
    return 0;
}