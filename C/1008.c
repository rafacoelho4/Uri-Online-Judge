#include <stdio.h>

int main() {
  int nro, horas;
  double salario;
  scanf("%d %d", &nro, &horas);
  scanf("%lf", &salario);
  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", nro, salario * horas);
  return 0;
}
