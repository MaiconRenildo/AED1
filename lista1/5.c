// Faça um programa que leia um número e gere todos os números primos entre 1 e
// este número fornecido, exibindo-os na tela. O programa deve ter uma sub-rotina que
// determina se um número é primo ou não.

#include <stdio.h>

int e_primo(int value){
    int cont=0,i=1;
    while(i<=value){
        if((value%i)==0){
            cont++;
        }    
        i++;
    }
        
    if(cont<=2){
        return 1;
    }else{
        return 0;
    }
}

void main(){  
    int i=1,value,ultimo=0;
    printf("Digite um número: ");
    scanf("%d",&value);
    
    if(value<1){
        printf("O número precisa ser positivo!");
    }else{
        printf("\nPrimos: \n");
        
        while(i<=value){
            if(e_primo(i)){
                if(ultimo==0){
                    ultimo=i;
                }else{
                    printf("%d,",ultimo);
                    ultimo=i;
                }
            }
            i++;
        }
        printf("%d",ultimo);
        e_primo(value);
    }
}