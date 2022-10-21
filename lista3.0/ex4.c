//Crie um programa que crie dinamicamente uma matriz quadrada de inteiros com tamanho informado pelo
//usuário e leia um inteiro informado pelo usuário. Seu programa deve calcular o produto escalar entre o número
//e a matriz informada, em uma nova matriz, e imprimir o resultado. Utilize procedimentos para leitura da
//matriz, cálculo do produto escalar e impressão das matrizes.

#include <stdio.h>
#include <stdlib.h>     

void leitura(int tam, int **matriz)
{   
    int i, j;

    for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
            printf("Digite [%d][%d]", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }   
    }
}

void calculo_produto_escalar(int *tam, int escalar, int **matriz)
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

void imprimir_matriz(int *tam, int **matriz)
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
    int tam, i, j;
    int escalar;
    int **matriz;
    printf("Informe o tamanho da matriz quadrada:\n");
    scanf("%d", &tam);

    matriz = (int **) malloc(tam * sizeof(int));

    for(i = 0; i < tam; i++)
    {
        matriz[i] = (int *) malloc(tam * sizeof(int));
    }

    leitura(tam, matriz);

    printf("Digite o inteiro para multiplicar a matriz:\n");
    scanf("%d", &escalar);

    calculo_produto_escalar(tam, escalar, matriz);
    imprimir_matriz(tam, matriz);

    return 0;
}
