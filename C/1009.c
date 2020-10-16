#include <stdio.h>

int main ()
{
	double salarioFixo, vendas, salarioAgora;
	char nome[256];

	scanf("%s",&nome);
	scanf("%lf %lf", &salarioFixo, &vendas);

	salarioAgora = salarioFixo + (0.15 * vendas);

	printf("TOTAL = R$ %.2lf\n", salarioAgora);

	return 0;
}
