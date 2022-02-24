#include <stdio.h>
int main() {
  int a[10][10], c[10][10], m, n;
  
  scanf("%d %d", &m, &n);

  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) {
    scanf("%d", &a[i][j]);
  }

  for (int i = 0; i < m; ++i)
  for (int j = 0; j < n; ++j) {
    c[j][i] = a[i][j];
  }
  for (int i = 0; i < n; ++i)
  {
  for (int j = 0; j < m; ++j) {
    printf("%d  ", c[i][j]);
  }
  printf("\n");
  }
  return 0;
}