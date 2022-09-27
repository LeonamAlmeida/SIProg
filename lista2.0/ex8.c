#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, j;
    int C[5][5];
    int soma_linha1 = 0, soma_linha2 = 0,  soma_linha3 = 0, soma_linha4 = 0, soma_linha5 = 0;
    int soma_linha[5] = {0};
    int maior_soma = -999999;
    int menor_soma = 999999;
    

    srand (time(NULL));

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            C[i][j] = rand () % 11;
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            soma_linha[i] += C[i][j];
        }
            printf("Soma linha %d = %d\n", i + 1, soma_linha[i]);
    }
    for(i = 0; i < 5; i++){
        if(soma_linha[i] < menor_soma){
            menor_soma = soma_linha[i];
            printf("A linha com a menor soma eh a linha %d\n", i + 1);
        }
    }

    return 0;
} // IMCOMPLETO
