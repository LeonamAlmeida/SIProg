#include <stdio.h>
#include <stdlib.h>     
#include <time.h> 

void leitura(int tam, int escalar)
{   
    int i, j;

    printf("Informe o tamanho da matriz quadrada:\n");
    scanf("%d", &tam);

    int **matriz;

    matriz = malloc(tam * sizeof(int*));

    for(i = 0; i < tam; i++)
    {
        matriz[i] = malloc(tam * sizeof(int));
        for(j = 0; j < tam; j++)
        {
            matriz[i][j] = rand () % 11;
            printf("%d\t", matriz[i][j]);
        }   printf("\n");
    }
    printf("Digite o inteiro para multiplicar a matriz:\n");
    scanf("%d", escalar);
}

void calculo_produto_escalar(int tam, int escalar, int **matriz)
{
    int i, j;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            matriz[i][j] *= escalar;
        }
    }
}

void imprimir_matriz(int tam, int **matriz)
{
    int i, j;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("%d\t", matriz[i][j]);
        }   printf("\n");
    }
}

int main()
{ 
    srand(time(NULL));
    int tam, escalar;
    int **matriz;
    leitura(tam, escalar);
    calculo_produto_escalar(tam, escalar, matriz);
    imprimir_matriz(tam, matriz);

    return 0;
}
