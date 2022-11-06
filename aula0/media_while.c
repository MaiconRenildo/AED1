#include <stdio.h>
int main(){
    float n1, n2, media;
    int resp=1;
    while (resp==1){
        printf("Informe a primeira nota:");
        scanf("%f", &n1);
        printf("Informe a segunda nota:");
        scanf("%f", &n2);
        media=(n1+n2)/2;
        printf("Média: %.1f\n", media);
        printf("Deseja informar novos dados (1-sim ou 2-não)?");
        scanf("%d",&resp);
    }
}