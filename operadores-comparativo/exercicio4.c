#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h> // Necessário para a função malloc e free

// Função para ler o texto com alocação dinâmica
char *ler_texto()
{
    // Aloca memória para a string. 50 é um tamanho arbitrário.
    char *input = (char *)malloc(50 * sizeof(char)); 
    if (input == NULL) {
        perror("Falha na alocacao de memoria");
        exit(EXIT_FAILURE);
    }

    // Lê a linha do stdin (entrada padrão)
    if (fgets(input, 50, stdin) == NULL) {
        // Tratar erro de leitura se necessário
        free(input);
        return NULL;
    }


    input[strcspn(input, "\n")] = '\0'; 
    return input;
}

int main() {
  
    const char *email_correto = "admin";
    const char *senha_correta = "tsi2025";

    char *texto_a = NULL; 
    char *texto_b = NULL; 

    printf("Email: ");
    texto_a = ler_texto();

    printf("Senha: ");
    texto_b = ler_texto();

    
    bool email_ok = (strcmp(texto_a, email_correto) == 0);
    bool senha_ok = (strcmp(texto_b, senha_correta) == 0);

    if (email_ok && senha_ok) {
        printf("Voce Logou\n");
    } else {
        printf("Login Invalido\n");
    }



    return 0;
}