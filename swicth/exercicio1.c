#include <stdio.h>
void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int ler_int() {
    int numero;
    scanf("%d", &numero);
    limpar_buffer();
    return numero;
}

int main() {
    
    printf("Informe a sua região do brasi: 1 - Sul, 2 - Sudeste, 3 - Centro-Oeste, 4 - Nordeste, 5 - Norte :");
    int dia = ler_int();
    
    switch(dia) {
        case 1:
            printf("O frete para Sul: R$ 5,00\n");
            break;
        case 2:
            printf("O frete para Sudeste: R$ 5,00\n");
            break;
        case 3:
            printf("O frete para Centro-Oeste: R$ 7,50\n");
            break;
        case 4:
            printf("O frete para Nordeste: R$ 12,50\n");
            break;
        case 5:
            printf("O frete para Norte: R$ 15,00\n");
            break;
        default:
            printf("Regiao inválida\n");
    }
    
    return 0;
}