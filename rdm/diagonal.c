#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main(){

    // iniciar aleatorio
    srand (time(NULL));

    int matriz[10][10];
    int i, j;
    int soma_diagonal_principal;
    int soma_diagonal_secundaria;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            matriz[i][j] = rand() %10;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    for(i = 0; i < 10; i++){
        soma_diagonal_principal += matriz[i][i];
    }

    printf("Soma da diagonal principal: %d\n", soma_diagonal_principal);

    return 0;
}

//https://cplusplus.com/reference/cstdlib/rand/
