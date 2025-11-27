#include <stdio.h>

int main() {
    int contador = 1;
    
    while (contador <= 500) {
        if (contador%5 == 0){
            printf("Repetindo com o while, volta n° %d\n", contador);
        }
        
        contador++;
    }
    
    return 0;
}