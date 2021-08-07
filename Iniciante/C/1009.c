#include <stdio.h>
 
int main() { 
    char vendedor;
    double salario, vendas, total;

    scanf("%s %lf %lf", &vendedor, &salario, &vendas);

    total = salario + (vendas * 0.15);

    printf("TOTAL = R$ %.2f\n", total);

    return 0;
}