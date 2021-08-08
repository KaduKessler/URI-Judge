#include <stdio.h>
 
int main() {
    float litrosGasto, tempoGasto, velocidadeMedia;

    scanf("%f %f", &tempoGasto, &velocidadeMedia);

    litrosGasto = (velocidadeMedia * tempoGasto)/12;
    printf("%.3f\n", litrosGasto);
 
    return 0;
}