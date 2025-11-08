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
    
    
    printf("Digite o seu peso: ");
    num1 = ler_num_decimal();
    printf("Digite a sua altura: ");
    num2 = ler_num_decimal();

   double imc = num1/(num2* num2);


    printf("Seu IMC: %.2f",imc);
    
    return 0;
}