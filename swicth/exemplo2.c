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
    
    printf("Que dia da semana é hoje? ");
    int dia_da_semana = ler_int();
    
    switch(dia_da_semana) {
        case 2: // segunda-feira
        case 3: // terça-feira
        case 4: // quarta-feira
        case 5: // quinta-feira
        case 6: // sexta-feira
            printf("Hoje é dia útil\n");
            printf("Bora trabalhar\n");
            break;
        case 7: // sábado
				case 1: // domingo
            printf("Hoje é final de semana\n");
            printf("Bora descansar\n");
            break;
        default:
            printf("Dia da semana inválido\n");
    }
    
    return 0;
}