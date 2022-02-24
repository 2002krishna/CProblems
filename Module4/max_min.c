# include <stdio.h>
int main(void){
  int a[100],n;
  scanf("%d",&n);
  for (int i=0; i<n; i++)
    scanf("%d", &a[i]);
  for (int i=0; i<n; i++)
    printf("%d\t", a[i]);
  int min_element = a[0];    
  int max_element = a[0];    
  for (int i=0; i<n; i++) {
    if (a[i] < min_element) 
      min_element = a[i];

    if (a[i] > max_element) 
      max_element = a[i];        
  }
  printf("%d\n %d\n", min_element, max_element);
  return 0;
}