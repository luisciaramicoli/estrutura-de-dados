#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
int ler_num_inteiro() {
    int numero;
    scanf("%d", &numero);
   
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
    int idade;
    double altura;

    printf("Digite o seu nome: ");
    nome = ler_texto();

    printf("Digite a sua idade: ");
    idade = ler_num_inteiro();

    printf("Digite a sua altura: ");
    altura = ler_num_decimal();

    printf("Olá, %s! a sua idade é %d e sua altura é %.2f", nome, idade,altura);

    return 0;
}