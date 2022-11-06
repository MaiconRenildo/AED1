#include <stdio.h>
int main(){
  float n1, n2, media, mediaT=0;
  int cont;
  for (cont = 1; cont<=20; cont ++){
    printf("Informe a primeira nota:");
    scanf("%f", &n1);
    printf("Informe a segunda nota:");
    scanf("%f", &n2);
    media=(n1+n2)/2;
    printf("Média: %.1f", media);
    if (media >= 7.0)
      printf(“Aprovado!”);
    else
      if (media< 4.0)
        printf(“Reprovado!”);
      else
        printf(“Prova Final!”);
    mediaT = mediaT + media;
  }
  mediaT = mediaT/20;
  printf("Média da turma: %.1f", mediaT);
}