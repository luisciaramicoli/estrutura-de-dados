#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

 char *ler_texto(){

    char *input = malloc(50 * sizeof(char));

    fgets(input, 50, stdin);

    input[strcspn(input, "\n")] = 0;

    return input;

} 

int main() {
    
    int mes_numero = 0; 
    
    printf("Que Mes estamos? digite em minusculo ");
    char *mes_nome = ler_texto();

    if (strcmp(mes_nome, "janeiro") == 0) {
        mes_numero = 1;
    } 
    else if (strcmp(mes_nome, "fevereiro") == 0) {
        mes_numero = 2;
    } 
    else if (strcmp(mes_nome, "março") == 0) {
        mes_numero = 3;
    } 
    else if (strcmp(mes_nome, "abril") == 0) {
        mes_numero = 4;
    } 
    else if (strcmp(mes_nome, "maio") == 0) {
        mes_numero = 5;
    } 
    else if (strcmp(mes_nome, "junho") == 0) {
        mes_numero = 6;
    } 
    else if (strcmp(mes_nome, "julho") == 0) {
        mes_numero = 7;
    } 
    else if (strcmp(mes_nome, "agosto") == 0) {
        mes_numero = 8;
    } 
    else if (strcmp(mes_nome, "setembro") == 0) {
        mes_numero = 9;
    } 
    else if (strcmp(mes_nome, "outubro") == 0) {
        mes_numero = 10;
    } 
    else if (strcmp(mes_nome, "novembro") == 0) {
        mes_numero = 11;
    } 
    else if (strcmp(mes_nome, "dezembro") == 0) {
        mes_numero = 12;
    }
    
    switch(mes_numero) {
        case 12: // Dezembro
        case 1:  // Janeiro
        case 2:  // Fevereiro
            printf("Estação do ano: Verão\n");
            break;
            
        case 3: // Março
        case 4: // Abril
        case 5: // Maio
            printf("Estação do ano: Outono\n");
            break;
            
        case 6: // Junho 
        case 7: // Julho
        case 8: // Agosto
            printf("Estação do ano: Inverno\n");
            break;
            
        case 9:  // Setembro
        case 10: // Outubro
        case 11: // Novembro
            printf("Estação do ano: Primavera\n");
            break;
            
        default: 
            printf("Mes inválido\n");
    }
    
    return 0;
}