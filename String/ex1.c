#include<stdio.h>
#include<string.h>

int main(){
	char nome[50];
	int qtde;
	
	printf("Digite seu nome: ");
	fgets(nome,50,stdin);
	
	qtde = strlen(nome);
	
	printf("Quantidade de caracteres digitados: %d", qtde-1);
}
