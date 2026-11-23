#include <stdio.h>
 
int main(){
    float pi = 3.14159;
    float raio; 
    float area;

    // printf("Digite o valor do raio");
    scanf("%f", &raio);

    area = pi*(raio*raio);
    printf("A=%.4f\n", area);

    return 0;
}