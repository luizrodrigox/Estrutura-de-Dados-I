#include<stdio.h>
#include<stdlib.h>

int ** criaMatrizFloat(int linhas, int colunas){
	
	int **matriz = (int**) malloc(linhas*sizeof(int*));
    int linha;
    for (linha = 0; linha < linhas; linha++){
        matriz[linha] = (int*) malloc(colunas*sizeof(int));
    }
    return matriz;
}

int main(void){
    
    //Alocando uma matriz de números reais 3x3
    
	int linha;
    int linhas = 3;
    int colunas = 3;
    int **matriz = criaMatrizFloat(linhas, colunas);

    //Preenchendo a matriz

    int i, j;
    printf("Digite os valores para matriz: \n");
    for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
            matriz[i][j] = i*3+j;
        }
    }
	
	 for (i = 0; i < linhas; i++){
        for (j = 0; j < colunas; j++){
        	printf("%d\t", matriz[i][j]);
        }
	}
    
    //Liberar a matriz

   for (linha = 0; linha < linhas; linha++){
       free(matriz[linha]);
   }
   free(matriz);
    return(0);
}
