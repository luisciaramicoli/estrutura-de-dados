#include <stdio.h>
#include "./leitor.c"
int main() {
    int contador = 1;
    int preco = 0;
    while (contador <= 5 ) {
        
        printf("\nEscolha os produtos para a sua compra:\n");
        printf("\n--- menu de itens ---\n");
        printf("1. Camisa (R$ 40,00)\n");
        printf("2. Camisa (R$ 80,00)\n");
        printf("3. Cinto (R$ 25,00)\n");
        printf("4. Sapatos (R$ 12,00)\n");
        printf("5. Chapéu (R$ 35,00)\n");
        printf("0. Finalizar\n");

        printf("Digite sua opção: ");
        int num = ler_int();

        if(num == 1){
             preco += 40;
        }else if(num == 2){
             preco += 80;
        }else if(num == 3){
             preco += 25;
        }else if(num == 4){
             preco += 12;
        }else if(num == 5){
             preco += 35;
        }else{
            contador = 5;
        }

        contador++;
        
    }

    printf("O preço total é: %d \n", preco);
    return 0;
}