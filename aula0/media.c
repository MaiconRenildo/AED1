#include <stdio.h>
void main(){
    float nota1, nota2, media;
    
    printf("Informe a primeira nota:");
    scanf("%f", &nota1);
    printf("Informe a segunda nota:");
    scanf("%f", &nota2);
    
    media=(nota1+nota2)/2;
    printf("Media: %.1f \n", media);
    
    if (media>=7)
        printf("Aprovado");
    else
        if (media<4)
            printf("Reprovado");
        else
            printf("Prova Final");
}