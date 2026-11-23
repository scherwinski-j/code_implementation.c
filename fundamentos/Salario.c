#include <stdio.h>

int main(){
    int numero;
    int horasTrabalhadas;
    double valorPorHora;
    double salario;

    scanf("%d", &numero);
    scanf("%d", &horasTrabalhadas);
    scanf("%lf", &valorPorHora);
    
    salario = horasTrabalhadas * valorPorHora;

    printf("NUMBER = %d\n", numero);
    printf("SALARY = U$ %.2f\n", salario);

    return 0;
}