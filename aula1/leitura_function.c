#include <stdio.h>
float NOTA1,NOTA2;
void leitura(){
    printf("Digite a primeira nota: ");
    scanf("%f",&NOTA1);
    printf("Digite a segunda nota: ");
    scanf("%f",&NOTA2);
}
int main(){
    float MEDIA;
    leitura();
    MEDIA = (NOTA1 + NOTA2) / 2;
    printf("Media = %f",MEDIA);
}