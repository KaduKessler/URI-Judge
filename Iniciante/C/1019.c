#include <stdio.h>
 
int main() {
    int tempo, horas, minutos, segundos;

    scanf("%d", &tempo);

    horas = tempo / 3600;
    tempo -= horas * 3600;
    minutos = tempo / 60;
    tempo -= minutos * 60;
    segundos = tempo;
    printf("%d:%d:%d\n", horas, minutos, segundos);

    return 0;
}