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
   
    printf("Digite o desconto em porcentage: ");
    num2 = ler_num_decimal();

   double desconto = (num1*num2)/ 100;


    printf("O preco original é: %.2f",num1);
    printf("O desconto é: %.2f",desconto);
    printf("O preco menos o desconto é: %.2f",num1-desconto);
    
    return 0;
}