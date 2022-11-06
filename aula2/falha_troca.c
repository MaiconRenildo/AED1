#include <stdio.h>

void troca(int x,int y){
    int aux;
    aux = x;
    x=y;
    y= aux;
}

int main(){
    int a, b;
    printf("Informe dois números:");
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Antes da troca: %d - %d\n",a,b);
    troca(a,b);
    printf("Após a troca: %d - %d\n", a,b);
}