// Faça um programa para ler um conjunto de números reais, armazenando-o em vetor e
// calcular o quadrado das componentes deste vetor, armazenando o resultado em outro
// vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos.

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


int main(){
    int i = LEN_VETOR,j;

    int a[i],b[i];
    for(int j=0;j<i;j++){
        printf(" A[%d]: ",j);
        scanf("%d",&a[j]);
    }

    printf("\nSaída de dados do vetor A: \n");
    print_array(a);
    
    for(j=0;j<i;j++){
        b[j] = pow(a[j],2);
    }
    
    printf("\nSaída de dados do vetor B: \n");
    print_array(b);
}