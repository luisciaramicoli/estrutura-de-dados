#include <stdio.h>

int main() {
	float decimal;
    double outro_decimal;
    printf("Digite um número decimal: ");
    scanf("%f",&decimal);

    printf("Digite outro número decimal: ");
    scanf("%lf",&outro_decimal);

    printf("Primeiro número: %.2f\n",decimal);
    printf("Segundo número: %.2f\n", outro_decimal);
	return 0;
}