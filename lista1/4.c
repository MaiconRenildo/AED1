// Faça um programa para ler um conjunto de números inteiros, armazenando-o em vetor
// e calcular a soma de todos os valores armazenados. Os conjuntos têm 10 elementos cada.
// Ao final, o programa deve exibir todos os valores do vetor e o somatório calculado.
// OBS.:
// - O vetor deve ser declarado como uma variável local, dentro do main;
// - Os dados do vetor devem ser lidos por um procedimento de leitura, aplicando
// corretamente o uso de passagem de parâmetros;
// - A impressão dos dados deve ser feita por um procedimento e chamada no
// main para que seja executada.

#include <stdio.h>

int LEN_VETOR = 4;

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
    int vetor[LEN_VETOR],i=0,soma=0;
    while(i<LEN_VETOR){
        printf("[%d]: ",i);
        scanf("%d",&vetor[i]);
        soma+=vetor[i];
        i++;
    }
    
    printf("\nSoma: %d\n",soma);
    printf("Vetor: ");
    print_array(vetor);
}