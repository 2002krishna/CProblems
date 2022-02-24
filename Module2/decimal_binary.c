# include <stdio.h>
int main() {
  int n, r, n_b=0;
  scanf("%d", &n);
  int f = 1;
  
  while ( n!=0){
    r = n%2;
    n_b = n_b + r*f;
    f = f*10;
    n = n/2;
  }
  printf("%d\n", n_b);
  return 0;
}