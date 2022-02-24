# include <stdio.h>
# define SIZE 10
int main(void){
  int list_of_integers[SIZE];  // Array declaration
  int element,n;
  scanf("%d",&n);
  for (int i=0; i<n; i++)
    scanf("%d", &list_of_integers[i]);
  for (int i=0; i<n; i++)
    printf("%d\t", list_of_integers[i]);
  
  scanf("%d", &element);

  for (int i=0; i<n; i++)
    if (element == list_of_integers[i]) {
      printf("\nThe element is found at index %d\n", i);
      return 0;
    }
  printf("\nThe element is not found\n");
  return 0;
}