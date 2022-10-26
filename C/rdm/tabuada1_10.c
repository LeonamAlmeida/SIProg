#include <stdio.h>

void calcular_tabuada(){

    int i, j;
    int tabuada[10][10];
    for(i = 1; i <= 10; i++){
        for(j = 1; j <=10; j++){
            tabuada[i][j] = i * j;
            printf("%d x %d = %d\n", i, j, tabuada[i][j]);
        }
    }
}

int main(){

    int tabuada[10][10];

    calcular_tabuada();

    return 0;
}
