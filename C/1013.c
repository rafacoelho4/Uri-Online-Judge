#include <stdio.h>

int main() {
  int a, b, c, maior1, maior2;
  scanf("%d %d %d", &a, &b, &c);

  if(a >= b) maior1 = a;
  else maior1 = b;

  if(c >= maior1) maior2 = c;
  else maior2 = maior1;

  printf("%d eh o maior\n", maior2);

  return 0;
}
