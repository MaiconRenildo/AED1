#include <stdio.h>

void leitura(float *n1, float *n2){
    printf("Digite a primeira nota: ");
    scanf("%f",n1);
    printf("Digite a segunda nota: ");
    scanf("%f",n2);
}

float calcular_media(float a,float b){
    return (a+b)/2;
}

int main(){
    float NOTA1, NOTA2;
    int cont = 0;
    while(cont<2){
        leitura(&NOTA1, &NOTA2);
        printf("Media = %f \n",calcular_media(NOTA1,NOTA2));
        cont++;
    }
}