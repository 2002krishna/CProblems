# include <stdio.h>
int main() {
  int a, b, temp;
  scanf("%d", &a);
  scanf("%d", &b);
  if (a < b) {
    //swap a and b
    temp = a;
    a = b;
    b = temp;

  }
  while (a % b != 0){
    temp = a % b;
    a = b;
    b = temp;
  }
  printf("%d\n", b);
  return 0;
}