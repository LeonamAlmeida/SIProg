#include <stdio.h>

int main(){

    int linha, coluna;

    for(linha = 1; linha <= 10; linha++){
        for(coluna = 1; coluna <= 10 - linha + 1; coluna++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
