#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./leitor.c"
int main() {
  srand(time(NULL));
  int num = 0;
  int numero_secreto = (rand() % 100) + 1;

    printf("Bem vindo ao jogo de acertar o numero, voce tera que acertar um numero de 1 a 100!!");

  while (numero_secreto != num) {
            printf("\nDigite o numero secreto: ");
            num = ler_int();
        if (num > numero_secreto){
            printf("O numero: %d é maior que o numero secreto", num);
        }else if (num < numero_secreto){ 
            printf("O numero: %d é menor que o numero secreto",num);
        }
        
        
    }

    printf("Parabens voce acertou o numero!!!\n");

  return 0;
}
