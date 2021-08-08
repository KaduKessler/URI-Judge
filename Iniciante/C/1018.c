#include <stdio.h>
 
int main() {
    int cem, cinquenta, vinte, dez, cinco, dois, um, valor, resto;

    scanf("%d", &valor);
    resto = valor;

    printf("%d\n", valor);
    cem = resto / 100;
    resto -= cem * 100;
    printf("%d nota(s) de R$ 100,00\n", cem);

    cinquenta = resto / 50;
    resto -= cinquenta * 50;
    printf("%d nota(s) de R$ 50,00\n", cinquenta);

    vinte = resto / 20;
    resto -= vinte * 20;
    printf("%d nota(s) de R$ 20,00\n", vinte);

    dez = resto / 10;
    resto -= dez * 10;
    printf("%d nota(s) de R$ 10,00\n", dez);

    cinco = resto / 5;
    resto -= cinco * 5;
    printf("%d nota(s) de R$ 5,00\n", cinco);

    dois = resto / 2;
    resto -= dois * 2;
    printf("%d nota(s) de R$ 2,00\n", dois);

    um = resto / 1;
    resto -= um * 1;
    printf("%d nota(s) de R$ 1,00\n", um);
 
    return 0;
}