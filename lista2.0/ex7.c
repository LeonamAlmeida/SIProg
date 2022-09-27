#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main(){

    int i, j;
    int matriz[3][6];
    int valor;

    srand (time(NULL));

    for( i = 0; i < 3; i++){
        for( j = 0; j < 6; j++){
            matriz[i][j] = rand() % 10 + 1;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Digite um valor para multiplicar a matriz:\n");
    scanf("%d", &valor);
    printf("Matriz resultante:\n");

    for( i = 0; i < 3; i++){
        for( j = 0; j < 6; j++){
            matriz[3][6] = valor * matriz[i][j];
            printf("%d\t", matriz[3][6]);
        }
        printf("\n");
    }

    return 0;
}
