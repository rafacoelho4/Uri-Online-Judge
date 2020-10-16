#include <stdio.h>

int main() {
  int valor;
  int cem = 0, cinq = 0, vinte = 0, dez = 0, cinco = 0, dois = 0, um = 0;

  scanf("%d", &valor);

  printf("%d\n", valor);

  while((valor % 100) != valor) {
    cem++;
    valor = valor - 100;
  }

  while((valor % 50) != valor) {
    cinq++;
    valor = valor - 50;
  }

  while((valor % 20) != valor) {
    vinte++;
    valor = valor - 20;
  }

  while((valor % 10) != valor) {
    dez++;
    valor = valor - 10;
  }

  while((valor % 5) != valor) {
    cinco++;
    valor = valor - 5;
  }

  while((valor % 2) != valor) {
    dois++;
    valor = valor - 2;
  }

  while((valor % 1) != valor) {
    um++;
    valor = valor - 1;
  }

  printf("%d nota(s) de R$ 100,00\n", cem);
  printf("%d nota(s) de R$ 50,00\n", cinq);
  printf("%d nota(s) de R$ 20,00\n", vinte);
  printf("%d nota(s) de R$ 10,00\n", dez);
  printf("%d nota(s) de R$ 5,00\n", cinco);
  printf("%d nota(s) de R$ 2,00\n", dois);
  printf("%d nota(s) de R$ 1,00\n", um);

  return 0;
}
