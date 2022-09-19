#include <stdio.h>
#include <stdlib.h>

void leitura(int vetor[], int i){

    for(i = 0; i < 20; i++){
        printf("Digite o valor %d:\n", i + 1);
        scanf("%d", &vetor[i]);

        while(vetor[i] < 0){
            printf("Apenas numeros positivos sao permitidos, digite novamente:\n");
            printf("Digite o valor %d:\n", i + 1);
            scanf("%d", &vetor[i]);
    }
}
}

void imprimir_abaixo_media(int vetor[], float media){

    int i;
    int somatorio = 0;
    for(i = 0; i < 20; i++){
        somatorio+= vetor[i];
    }
    media = (float)somatorio / 20;
    printf("Media = %f\n", media);
    printf("Valores abaixo da media:\n");
    for(i = 0; i < 20; i++){
        if(vetor[i] < media){
            printf("%d\n", vetor[i]);
    }
}
}

int main()
{
    int i;
    int vetor [20];
    float media;

    leitura(vetor, i);
    imprimir_abaixo_media(vetor, media);

    return 0;
}
