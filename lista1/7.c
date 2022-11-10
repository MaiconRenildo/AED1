// Faça um programa que implemente uma função recursiva que receba por parâmetro
// um número inteiro positivo n e imprima todos os números naturais de 0 a N em ordem
// crescente.

#include <stdio.h>

int exibe_naturais(int inicio,int fim){
    if(inicio==fim){
       printf("%d",inicio);
       return 0;
    }else{
        printf("%d,",inicio);
        return exibe_naturais(inicio+1,fim);
    }
}

void main()
{   
    int a;
    printf("Digite um número: ");
    scanf("%d",&a);
    if(a<1){
        printf("Você digitou %d. O número precisa ser positivo",a);
    }else{
        printf("\nNaturais de %d a %d:\n",0,a);
        exibe_naturais(0,a);
    }
}
