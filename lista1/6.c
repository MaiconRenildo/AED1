// Faça uma função recursiva para fazer a multiplicação de dois números (a e b). A
// função receberá dois números positivos não nulos a e b e deve retornar o resultado de a × b.

#include <stdio.h>

int multiplica_int(int vezes,int valor){
    if(valor==0) return 0;
    if(vezes==0) return 0;
    if(vezes==1) return valor;
    
    return valor + multiplica_int(vezes-1,valor);
}

int main(){   
    int a,b,resultado;
    printf("informe o multiplicador: ");
    scanf("%d",&a);
    printf("informe o valor: ");
    scanf("%d",&b);
    
    resultado = multiplica_int(a,b);
    printf("Resultado: %d",resultado);
}