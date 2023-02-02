#include<stdio.h>
#include<stdlib.h>

int main(){
    int tamanho = 10;
    int i;
    int *vetor = (int*) malloc (tamanho*sizeof(int));
    if (vetor == NULL){
        printf("ERRO. Sem memória");
        exit(1);
    }

    for(i = 0; i < tamanho; i++){
        vetor[i] = i;
    }

    /*
    Imprimir vetor
    */

    for (i = 0; i < tamanho; i++){
        printf("%d\t", vetor[i]);
    }

    free(vetor);
    
    return(0);
}
