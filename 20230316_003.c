#include<stdio.h>
#include<stdlib.h>

double **aloca2(int f, int c){
    double **m;
    int i, j;

    m = (double **) malloc(f * sizeof (double *));

    for (i = 0; i < f; i++)
        *(m+i) = (double *) malloc (c * sizeof (double));

    for (i = 0; i < f; i++){
        for (j = 0; j < c; j++){
                printf ("Valor em %d,%d = ", i+1, j+1);
                scanf ("%lf", (*(m+i)+j));
        }
    }
    return m;
 }

 void main(){
    int n, m, i, j;
    double **m1;
    double **m2;
    double **soma;
    
    printf ("Das matrizes:");
    printf ("\nNumero de linhas: ");
    scanf ("%d", &m);
    printf ("\nNumero de colunas: ");
    scanf ("%d", &n);
    
    printf ("\nMatriz 1\n");
    m1 = aloca2(m,n);

    printf ("\nMatriz 2\n");
    m2 = aloca2(m,n);

    printf ("\nSoma:");
    soma = (double **) malloc(m * sizeof (double *));

    for (i = 0; i < m; i++)
        *(soma+i) = (double *) malloc (n * sizeof (double));


    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
                (*(*(soma+i)+j)) = (*(*(m1+i)+j))+(*(*(m2+i)+j));
        }
    }

    for (i = 0; i < m; i++){
        for (j = 0; j < n; j++){
                printf ("\n Valor em %d,%d: %lf ", i+1, j+1, *(*(soma+i)+j));
         }
    }
    
    free(m1);
    free(m2);
    free(soma);
 }
