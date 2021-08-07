#include <stdio.h>
 
int main() {
    int codigo, codigo2, qtd, qtd2;
    float valor, valor2, total;

    scanf("%d %d %f", &codigo, &qtd, &valor);
    scanf("%d %d %f", &codigo2, &qtd2, &valor2);

    total = (qtd * valor) + (qtd2 * valor2);

    printf("VALOR A PAGAR: R$ %.2f\n", total);
 
    return 0;
}