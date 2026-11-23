#include <stdio.h>
 
int main(){
    float A;
    float Aweight = 3.5;
    float B;
    float Bweight = 7.5;
    float MEDIA;

    scanf("%f", &A);

    scanf("%f", &B);

    MEDIA = ((A*Aweight)+(B*Bweight))/(Aweight+Bweight);

    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}