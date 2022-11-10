// Faça um programa que preencha um vetor de 10 posições com números inteiros, exiba
// todo o vetor informado e o maior valor encontrado nesse vetor.

#include<stdio.h>
#include<math.h>

int LEN_VETOR = 10;

void print_array(int ar[]){
    int i = LEN_VETOR,j;

    printf("[");
    for(j=0;j<i;j++){
        if(j==i-1){
           printf("%d]",ar[j]); 
        }else{
            printf("%d,",ar[j]);
        }
        
    }
}


void main(){
    int i = LEN_VETOR,j,maior;

    int a[i],b[i];
    for(int j=0;j<i;j++){
        printf(" A[%d]: ",j);
        scanf("%d",&a[j]);
        
        if(maior){
            if(maior<a[j]){
                maior = a[j];
            }
        }else{
            maior = a[j];
        }
    }
    
    print_array(a);
    printf("\nMaior valor encontrado: %d",maior);
}