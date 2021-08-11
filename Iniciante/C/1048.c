#include <stdio.h>
 
int main() {
    float salario, salarioNovo, percentual, reajuste;

    scanf("%f", &salario);

    if (salario <= 400){
        percentual = 0.15;
    }else if (salario <= 800){
        percentual = 0.12;
    }else if (salario <= 1200){
        percentual = 0.10;
    }else if (salario <= 2000){
        percentual = 0.07;
    }else{
        percentual = 0.04;
    }

    salarioNovo = salario + (reajuste = salario * percentual);
    percentual = percentual * 100;
    printf("Novo salario: %.2f\n", salarioNovo);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual);
 
    return 0;
}