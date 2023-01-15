#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<conio.h>

typedef struct NoProduto{
	float preco;
	char nome[30];
	char codigo[10];
	struct NoProduto *prox;
}NoProduto;
NoProduto *inicioL;


void inserir_produto_no_inicio_da_lista(struct NoProduto *novoProduto);
void inicializa_lista_de_produtos();
void cabecalho(char *titulo);
void cadastrar_produto();
void exibir_produtos();
void remover_produto();
void buscar_produto();
NoProduto* cria_no();
void esperar_enter();
int lista_vazia();
void menu();


void inicializa_lista_de_produtos(){
	inicioL = NULL;
}

int lista_vazia(){
	if (inicioL== NULL)
		return 1;
	return 0;
}

NoProduto* cria_no(){
	NoProduto *pont; /* declara um ponteiro do tipo no */
	pont = (NoProduto*) malloc(sizeof(NoProduto)); /* Aloca o espaço de memória necessario e salva no ponteiro */
	return pont; /* Retorna o ponteiro */
} 

void inserir_produto_no_inicio_da_lista(struct NoProduto *novoProduto){
	novoProduto -> prox = inicioL; /* prox aponta para o primeiro elemento, ent: aux, inicioL,...*/
	inicioL = novoProduto; /* o primeiro elemento passa a ser o aux */
}

void esperar_enter(){
	getchar();
	fflush(stdin);
}

void cabecalho(char *titulo){
	fflush(stdin);
	system("cls");
	printf("----------------------------------------------------");
	printf("\n%s",titulo);
	printf("\n----------------------------------------------------\n");
}

void cadastrar_produto(){
	char titulo[] = "Cadastro de Produto";
	NoProduto *novoProduto = cria_no();
	if (novoProduto != NULL){
		cabecalho(titulo);	
		printf("Nome: ");
		gets(novoProduto->nome);	
		
		printf("\nPreco: ");
		scanf("%f",&novoProduto->preco );
		fflush(stdin);
		
		printf("\nCodigo: ");
		gets(novoProduto->codigo);
		
		inserir_produto_no_inicio_da_lista(novoProduto);
	}
	printf("\n\nProduto cadastrado com sucesso!");
	esperar_enter();
	menu();
}

void exibir_produtos(){
	char titulo[] = "Produtos Cadastrados";
	cabecalho(titulo);
	
	NoProduto *aux = cria_no();
	aux = inicioL;
	
	while(aux!=NULL){
		printf("\nNome: %s",aux->nome);
		printf("\nCodigo: %s",aux->codigo);
		printf("\nPreco: %.2f",aux->preco);
		printf("\n");
		aux = aux->prox;	
	}
	esperar_enter();
	menu();
}

void buscar_produto(){
	char titulo[] = "Busca de Produto";
	cabecalho(titulo);
	
	NoProduto *aux;
	char nome[30];
	
	printf("\nNome: ");
	gets(nome);
	
	aux = inicioL;
	if(!lista_vazia()) {
		while((aux!=NULL)&&(strcmp(aux->nome,nome)==1 || strcmp(aux->nome,nome)==-1)){
			aux = aux -> prox;
		}
		
		if (aux == NULL){
			printf("\n\nProduto nao encontrado!");
		}else{
			system("cls");
			printf("\n\nProduto encontrado: ");
			printf("\n\nNome: %s ",aux->nome);
			printf("\n\nPreco: %.2f ",aux->preco);
			printf("\n\nCodigo: %s ",aux->codigo);
		}
	}else{
		printf("\n\nNao ha produtos cadastrados!");
	}
	esperar_enter();
	menu();
}

void remover_produto(){
	char titulo[] = "Remocao de Produto";
	cabecalho(titulo);
	
	NoProduto *aux,*ant;
	ant = NULL;
	aux = inicioL;
	char nome[30];
	
	printf("\nNome: ");
	gets(nome);
	
	if(!lista_vazia() ) {
		
		//procura elemento na lista, guardando o anterior
		while((aux!=NULL)&&(strcmp(aux->nome,nome)==1 || strcmp(aux->nome,nome)==-1)){
			ant = aux;
			aux = aux -> prox;
		}
		
		if (aux == NULL){
			printf("\n\nProduto nao encontrado!");
		}else{ /* retira elemento */
			if (ant == NULL){
				inicioL = aux-> prox;
			}else{
				ant -> prox = aux-> prox;	
			}
			free(aux);
			printf("\n\nProduto removido com sucesso!");
		}
	}else{
		printf("\n\nNao ha produtos cadastrados!");
	}
	esperar_enter();
	menu();
}

void menu(){
	int opcao;
	do{	
		char titulo[] = "GERENCIAMENTO DE PRODUTOS";
		cabecalho(titulo);
		printf("\n1)Cadastrar produto");
		printf("\n2)Exibir produtos cadastrados");
		printf("\n3)Buscar produto");
		printf("\n4)Remover produto");
		printf("\n5)Sair");
		printf("\n\nDigite a opcao desejada: ");
		scanf("%d",&opcao);
	}while(opcao<1 || opcao>5);	
	switch(opcao){
		case 1:
			cadastrar_produto();
			break;
		case 2:
			exibir_produtos();
			break;
		case 3:
			buscar_produto();
			break;
		case 4:
			remover_produto();
			break;
		case 5:
			exit(0);
			break;
	}
}

int main(){
	inicializa_lista_de_produtos();	
	menu();
}
