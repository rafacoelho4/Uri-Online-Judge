#include <stdio.h>

int main() {
  int tempo, velocidade;
  double x;
  scanf("%d %d", &tempo, &velocidade);

  x = (tempo * velocidade)/12.0;

  printf("%.3lf\n", x);

  return 0;
}
