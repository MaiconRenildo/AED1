#include <stdio.h>
#include <locale.h> 

typedef struct produto{
	int cod, qtde;
	char nome[50];
	float pcompra, pvenda;
} produto;

int main(){
	setlocale(LC_ALL, "Portuguese");
	produto prod[5];
	int i;
	for (i=0; i<1;i++){
	printf("Código: ");
	scanf("%d", &prod[i].cod);
	printf("Nome: ");
	fflush(stdin); gets(prod[i].nome);
	printf("Quantidade em estoque: \n");
	scanf("%d",&prod[i].qtde);
	printf("Preço de compra: \n");
	scanf("%f",&prod[i].pcompra);
	printf("Preço de venda: \n");
	scanf("%f", &prod[i].pvenda);
	}
} 