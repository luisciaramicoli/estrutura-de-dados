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
    
    
    printf("Digite um numero: ");
    num1 = ler_num_decimal();
    printf("Digite outro numero: ");
    num2 = ler_num_decimal();
    printf("Digite outro numero: ");
    num3 = ler_num_decimal();
    printf("Digite outro numero: ");
    num4 = ler_num_decimal();
    

   double media = (num1 + num2+ num3+ num4)/4;


    printf("Sua media: %.2f",media);
    
    return 0;
}