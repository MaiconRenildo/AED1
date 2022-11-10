// Elabore um programa que leia vários registros de animais contendo os dados: nome,
// raça, data de nascimento e sexo. Os registros devem ser lidos enquanto o usuário desejar. O
// máximo de animais cadastrados é 50. Ao final, todos os registros devem ser impressos.

#include <stdio.h>

typedef struct animal{
	char sexo,nome[15],raca[10],data[10];
} animal;

int main(){
    int num,i;
    
    printf("Informe o numero de animais a serem cadastrados: ");
    scanf("%d",&num);
    
    if(num>50){
        printf("O máximo de animais cadastrados eh 50");
    }else{
        animal animais[num];
	
    	for (i=0; i<num;i++){
        	printf("\nNome: ");
        	fflush(stdin); gets(animais[i].nome);
        	
        	printf("\nRaca: ");
        	fflush(stdin); gets(animais[i].raca);
        	
        	printf("\nData de nascimento: ");
        	fflush(stdin); gets(animais[i].data);
        	
        	printf("\nSexo: ");
        	animais[i].sexo = getchar();
    	}
    	
    	printf("\n");
    	for (i=0; i<num;i++){
        	printf("animais[%i].nome: %s",i,animais[i].nome);
        	printf("\nanimais[%i].raca: %s",i,animais[i].raca);
        	printf("\nanimais[%i].data: %s",i,animais[i].data);
        	printf("\nanimais[%i].sexo: %c",i,animais[i].sexo);
        	printf("\n");
    	}
    }
} 
