#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "./leitor.c"
int main() {
  srand(time(NULL));
  int num = 0;
  int ponto = 1000;
    printf("\nBem vindo ao jogo de acertar o numero, voce tera que acertar um numero de 1 a 10!!\n");
    printf("\nVoce possui um saldo de 1000 pontos!!\n");
    printf("\nCaso acerte voce ganha 300 pontos e caso erre perde 100, se chegar a 0 voce perde!!\n");

  while (ponto != 0) {
            int numero_secreto = (rand() % 10) + 1;
            printf("\nDigite o numero secreto: ");
            num = ler_int();

        if(numero_secreto != num){
            ponto -= 100;
            
            printf("Voce errou o numero!!!\n");
        }else{
            ponto+=300;
            printf("Parabens voce acertou o numero!!!\n");
        }

        if(ponto == 3000){
            printf("Parabens voce alcancou 3000!!!\n");
            break;
        }
        printf("Voce possui %d",ponto);
    }
    printf("\nVoce perdeu!!!\n");

    

  return 0;
}
