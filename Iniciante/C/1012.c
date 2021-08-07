#include <stdio.h>
 
int main() { 
    float la, lb, lc, triangulo, circulo, trapezio, quadrado, retangulo;

    scanf("%f %f %f", &la, &lb, &lc);
	
    triangulo = la * lc / 2.0;
    printf("TRIANGULO: %.3f\n", triangulo);

    circulo = 3.14159 * (lc * lc);
    printf("CIRCULO: %.3f\n", circulo);

    trapezio = ((la + lb) * lc) / 2.0;
    printf("TRAPEZIO: %.3f\n", trapezio);

    quadrado = lb * lb;
    printf("QUADRADO: %.3f\n", quadrado);

    retangulo = la * lb;
    printf("RETANGULO: %.3f\n", retangulo);
	
    return 0;
}