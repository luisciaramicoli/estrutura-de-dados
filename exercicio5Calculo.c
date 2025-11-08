#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

double ler_num_decimal() {
    double numero;
    scanf("%lf", &numero);
    limpar_buffer();
    return numero;
}

char *ler_texto()
{
    char *input = malloc(50 * sizeof(char));
    fgets(input, 50, stdin);
    input[strcspn(input, "\n")] = 0;
    return input;
}


int main() {
    double num1;
    double num2;
    double num3;
    double num4;
    
    
    printf("Digite o preco: ");
    num1 = ler_num_decimal();
   
    printf("Digite a quantidade de parcelas: ");
    num2 = ler_num_decimal();

   num3 = (num1/10) + num1;
    double parcela = num3/num2;

    printf("O preco original é: %.2f\n",num1);
    printf("O preco com juros é: %.2f\n",num3);
    printf("O preco das parcelas é: %.2f\n",parcela);
    
    return 0;
}