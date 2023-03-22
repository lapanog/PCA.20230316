#include<stdio.h>
#include<stdlib.h>

int * aloca(int qtd){
    int *out = (int *) malloc (qtd * sizeof(int));
    for (int i = 0; i < qtd; i++){
        printf("Valor %d: ", i+1);
        scanf("%d", (out+i));
    }
    return out;
}

void maxmin(int *v, int *menor, int *maior, int qtd){
    int min = *(v+0);
    int max = 0;
    int i;

    for (i = 0; i < qtd; i++){
        if (min > *(v+i))
            min = *(v+i);
        if (max < *(v+i))
            max = *(v+i);
    }
    *maior = max;
    *menor = min;
}

void main(){
    int *vetor;
    int min = 0, max = 0;

    vetor = aloca(5);
    
    maxmin(vetor, &min, &max, 5);

    printf ("\nMaior: %d", max);
    printf ("\nMenor: %d", min);
}
