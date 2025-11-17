#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int ler_int() {
    int numero;
    
    if (scanf("%d", &numero) != 1) {
        printf("Entrada inválida! Tente novamente.\n");
        limpar_buffer(); 
        return ler_int(); 
    }
    limpar_buffer(); 
    return numero;
}

 char *ler_texto(){
    char *input = malloc(50 * sizeof(char));
    if (input == NULL) {
        printf("Erro ao alocar memoria!\n");
        exit(1); 
    }
    fgets(input, 50, stdin);
    input[strcspn(input, "\n")] = 0; 
    return input;
} 



int main() {
    int opCarne, opAcompanhamento, opBebida;
    double total = 0.0;
    
    char *nomeCarne;
    char *nomeAcompanhamento;
    char *nomeBebida;
    char *nomeCliente; 

    
    printf("Digite o nome para o pedido: ");
    nomeCliente = ler_texto(); 

    
    printf("\n--- Escolha sua Carne ---\n");
    printf("1. Filé de frango (R$ 15,00)\n");
    printf("2. Bisteca suína (R$ 15,00)\n");
    printf("3. Carne de panela (R$ 17,50)\n");
    printf("4. Peixe empanado (R$ 16,00)\n");
    printf("5. Carne de soja (R$ 18,00)\n");
    printf("Digite sua opção: ");
    opCarne = ler_int(); 

    switch(opCarne) {
        case 1:
            total += 15.00;
            nomeCarne = "Filé de frango";
            break;
        case 2:
            total += 15.00;
            nomeCarne = "Bisteca suína";
            break;
        case 3:
            total += 17.50;
            nomeCarne = "Carne de panela";
            break;
        case 4:
            total += 16.00;
            nomeCarne = "Peixe empanado";
            break;
        case 5:
            total += 18.00;
            nomeCarne = "Carne de soja";
            break;
        default:
            printf("Opção de carne inválida! Pedido cancelado.\n");
            return 1;
    }

    
    printf("\n--- Escolha seu Acompanhamento ---\n");
    printf("1. Arroz e feijão (R$ 10,00)\n");
    printf("2. Arroz e fritas (R$ 11,00)\n");
    printf("3. Macarrão alho e óleo (R$ 12,00)\n");
    printf("4. Macarrão à bolonhesa (R$ 14,00)\n");
    printf("Digite sua opção: ");
    opAcompanhamento = ler_int(); 

    switch(opAcompanhamento) {
        case 1:
            total += 10.00;
            nomeAcompanhamento = "Arroz e feijão";
            break;
        case 2:
            total += 11.00;
            nomeAcompanhamento = "Arroz e fritas";
            break;
        case 3:
            total += 12.00;
            nomeAcompanhamento = "Macarrão alho e óleo";
            break;
        case 4:
            total += 14.00;
            nomeAcompanhamento = "Macarrão à bolonhesa";
            break;
        default:
            printf("Opção de acompanhamento inválida! Pedido cancelado.\n");
            return 1; 
    }

    
    printf("\n--- Escolha sua Bebida ---\n");
    printf("1. Coca-Cola 200 ml (R$ 2,50)\n");
    printf("2. Suco de Laranja 200ml (R$ 4,50)\n");
    printf("3. Água Mineral 350ml (R$ 1,50)\n");
    printf("Digite sua opção: ");
    opBebida= ler_int(); 

    switch(opBebida) {
        case 1:
            total += 2.50;
            nomeBebida = "Coca-Cola 200 ml";
            break;
        case 2:
            total += 4.50;
            nomeBebida = "Suco de Laranja 200ml";
            break;
        case 3:
            total += 1.50;
            nomeBebida = "Água Mineral 350ml";
            break;
        default:
            printf("Opção de bebida inválida! Pedido cancelado.\n");
            return 1; 
    }

    
    printf("\n=========================\n");
    printf("    RESUMO DO PEDIDO     \n");
    printf("=========================\n");
    printf("Cliente: %s\n", nomeCliente); 
    printf("Prato: %s\n", nomeCarne);
    printf("Acompanhamento: %s\n", nomeAcompanhamento);
    printf("Bebida: %s\n", nomeBebida);
    printf("\n-------------------------\n");
    
    printf("TOTAL A PAGAR: R$ %.2f\n", total);
    printf("=========================\n");

   

    return 0; 
}