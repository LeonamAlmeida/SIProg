#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int i, j, i_menor, j_maior;
    int C[5][5];
    int soma_linha[5] = {0};
    int soma_coluna[5] = {0};
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
            i_menor = i;
        }
    }
    printf("A linha com a menor soma eh a linha %d\n", i_menor + 1);
    
    for(j = 0; j < 5; j++){
        for(i = 0; i < 5; i++){
            soma_coluna[j] += C[i][j];
        }
            printf("Soma Coluna %d = %d\n", j + 1, soma_coluna[j]);
    }
    for(j = 0; j < 5; j++){
        if(soma_coluna[j] > maior_soma){
            maior_soma = soma_coluna[j];
            j_maior = j;
        }
    }
    printf("A coluna com a maior soma eh a coluna %d\n", j_maior + 1);
    return 0;
}
