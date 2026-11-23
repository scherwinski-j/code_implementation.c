#include <stdio.h>
 
int main(){
    float A;
    float Aweight = 2;
    float B;
    float Bweight = 3;
    float C;
    float Cweight = 5;
    float MEDIA;

    scanf("%f", &A);

    scanf("%f", &B);

    scanf("%f", &C);

    MEDIA = ((A*Aweight)+(B*Bweight)+(C*Cweight))/(Aweight+Bweight+Cweight);

    printf("MEDIA = %.1f\n", MEDIA);

    return 0;
}