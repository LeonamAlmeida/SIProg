#include <stdio.h>
#include <stdlib.h>     
#include <time.h> 

void leitura_matriz(){

    srand(time(NULL));

    int n, i, j;

    printf("Informe a dimensão da matriz:\n");
    scanf("%d", &n);

    int matriz[n][n];

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matriz[i][j] = rand () % 11;
            printf("%d\t", matriz[i][j]);
        }   
        printf("\n");
    }   
}

void multiplicar_escalar(int n, int matriz[n][n]){

    int i, j, c;

    printf("Informe o escalar para multiplicar a matriz:\n");
    scanf("%d", &c);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            matriz[n][n] = c * matriz[i][j]; 
        }
    }
}

void imprimir_matriz(int n, int matriz[n][n]){

    int i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            printf("%d\t", matriz[n][n]);
        }
        printf("\n");
    }
}

int main(){ 

    int c, n;
    int matriz[n][n];
    leitura_matriz();
    multiplicar_escalar(n, matriz);
    imprimir_matriz(n, matriz);

    return 0;
} // n multiplica pelo escalar
