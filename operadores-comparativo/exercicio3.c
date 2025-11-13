#include <stdio.h>
#include <string.h> 
#include <stdlib.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

double ler_num_decimal() {
    double numero;
    scanf("%lf", &numero);
    limpar_buffer();
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
    double num1;
    
    
    printf("Digite um numero de 0 a 100: ");
    num1 = ler_num_decimal();
  
    
    if (num1>=90){
        printf("%.2f é A",num1);
    }else if (num1 >= 80 && num1 >= 89){
        printf("%.2f é B",num1);
    }else if (num1 >= 70 && num1 >= 79){
        printf("%.2f é C",num1);
    }else if (num1 >= 60 && num1 >= 69){
        printf("%.2f é D",num1);
    }else if (num1 >= 50 && num1 >= 59){
        printf("%.2f é E",num1);
    }else{
        printf("%.2f é F",num1);
    }
    


    return 0;
}