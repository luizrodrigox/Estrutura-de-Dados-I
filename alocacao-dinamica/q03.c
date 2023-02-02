#include<stdio.h>
#include<stdlib.h>

int main(void){
	int qtd_frutas;
	int linha;
	printf("Digite a quantidade de frutas: ");
	scanf("%d", &qtd_frutas);
	
    char**frutas = (char**) malloc(qtd_frutas*sizeof(char*));
    if (frutas == NULL){
    	printf("ERRO DE MEMORIA");
    	exit(1);
	}
	
	for (linha=0; linha<qtd_frutas; linha++){
		frutas[linha] = (char*) malloc(50*sizeof(char*));
	}
	
	float *preco = (float*) malloc(qtd_frutas*sizeof(float));
	if (frutas == NULL){
    	printf("ERRO DE MEMORIA");
    	exit(1);
	}
	
	printf("Informe as frutas e seu valor: \n");
	for (linha=0; linha<qtd_frutas; linha++){
		scanf(" %[^\n]s", frutas[linha]);
		scanf("%f", &preco[linha]);
	}
	
	for (linha=0; linha<qtd_frutas; linha++){
		free(frutas[linha]);
	}
	free(frutas);
	free(preco);
    return(0);
}
