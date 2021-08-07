#include <stdio.h>
 
int main() {
    int num, hrs;
    float recebe, salario;

    scanf("%d %d %f", &num, &hrs, &recebe);

    salario = hrs * recebe;
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salario);
 
    return 0;
}