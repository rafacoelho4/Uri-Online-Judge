#include <stdio.h>

int main (){
	int cod1, cod2, nro1, nro2;
  double valor1, valor2;

	scanf("%d %d %lf", &cod1, &nro1, &valor1);
  scanf("%d %d %lf", &cod2, &nro2, &valor2);

	printf("VALOR A PAGAR: R$ %.2lf\n", (nro1 * valor1) + (nro2 * valor2));

	return 0;
}
