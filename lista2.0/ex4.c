#include <stdio.h>

int main(){

    int i;
    int v1[10];
    int v2[10]; 
    int v3[10];

    for( i = 0; i < 10; i++){
        printf("Digite o valor %d do vetor 1:\n", i + 1);
        scanf("%d", &v1[i]);
    }
    for( i = 0; i < 10; i++){
        printf("Digite o valor %d do vetor 2:\n", i + 1);
        scanf("%d", &v2[i]);
    }
    printf("Resultado do produto entre vetores:\n");
    for( i = 0; i < 10; i++){
        v3[i] = v1[i] * v2[i];
        printf("[%d] = %d\n", i + 1, v3[i]);
    }

    return 0;
}
