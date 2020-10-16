#include <stdio.h>

int main() {
  double a, b, c;

  scanf("%lf %lf %lf", &a, &b, &c);

  double triangulo, circulo, trapezio, quadrado, retangulo, pi = 3.14159;

  triangulo = (a * c) / 2;
  circulo = pi * (c * c);
  trapezio = ((a + b) * c) / 2;
  quadrado = b * b;
  retangulo = a * b;

  printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n"
  , triangulo, circulo, trapezio, quadrado, retangulo);

  return 0;
}
