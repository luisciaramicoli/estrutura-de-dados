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
    double populacao;
    char *cidade;
    double populacao2;
    char *cidade2;
    
    printf("Informe o nome de uma cidade: ");
    cidade = ler_texto();
    printf("Informe a sua populacao estimada: ");
    populacao = ler_num_decimal();

    printf("Informe o nome de outra cidade: ");
    cidade2 = ler_texto();
    printf("Informe a sua populacao estimada: ");
    populacao2 = ler_num_decimal();

    printf("A cidade %s possui uma populacao estimada de %.2f e a %s com %.2f\n", cidade, populacao, cidade2, populacao2);

    
    return 0;
}