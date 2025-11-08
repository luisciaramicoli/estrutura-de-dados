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

    char *marca;
    int quantidade;
    char *produto;
    double preco;

    // Lendo um texto
    printf("Marca do produto: ");
    marca = ler_texto();
    
    // Lendo um número inteiro
    printf("Quantidade: ");
    quantidade = ler_num_inteiro();
    
    // Lendo um texto
    printf("Nome do produto: ");
    produto = ler_texto();

    // Lendo um número decimal
    printf("Preço: ");
    preco = ler_num_decimal();

    // Exibindo os valores
    printf("\n-- Valores informados --\n");
    printf("Marca: %s\n", marca);
    printf("Quantidade: %d\n", quantidade);
    printf("Produto: %s\n", produto);
    printf("Preço: %.2f\n", preco);

    // Exibindo tudo numa linha só
    printf("%d unidades de %s %s por %.2f cada.\n", quantidade, produto, marca, preco);
    
    return 0;
}