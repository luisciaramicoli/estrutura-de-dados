#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int ler_num_inteiro() {
    int numero;
    scanf("%d", &numero);
   limpar_buffer();
    return numero;
}

double ler_num_decimal() {
    double numero;
   
    scanf("%lf", &numero);
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
    char *nome;
    char *cidade;
    char *cargo;
    int idade;
    double pretencao;

    printf("Digite o seu nome: ");
    nome = ler_texto();

    printf("Digite a sua idade: ");
    idade = ler_num_inteiro();

    printf("Digite a sua cidade: ");
    cidade = ler_texto();

    printf("Digite o seu cargo: ");
    cargo = ler_texto();

    printf("Digite a sua pretenção salarial: ");
    pretencao = ler_num_decimal();

    printf("Olá, %s! a sua idade é %d e sua cidade é %s, seu cargo é %s e sua pretenção salarial é %.2f\n", nome, idade,cidade, cargo, pretencao);

    return 0;
}