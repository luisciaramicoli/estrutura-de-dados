#include <stdio.h>

int main() {
    int n1 = 15;
    int n2 = 95;
    printf(" %d e %d\n", n1, n2);
    printf("São iguais? %d\n", (n1==n2));
    printf("São diferentes? %d\n", !(n1==n2));
    printf("%d é maior que %d? %d\n",n1, n2, (n1 > n2));
    printf("%d é maior ou igual que %d? %d\n",n1, n2, (n1 >= n2));
     printf("%d é menor ou igual que %d? %d\n",n1, n2, (n1 <= n2));


    return 0;
}