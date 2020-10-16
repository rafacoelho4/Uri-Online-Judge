#include <stdio.h>

int main() {
  int x;
  double y, valor;
  scanf("%d %lf", &x, &y);

  valor = x / y;

  printf("%.3lf km/l\n", valor);

  return 0;
}
