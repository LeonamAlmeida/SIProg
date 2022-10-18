#include <stdio.h>
#include <stdlib.h>

void eh_multiplo(int a, int b, int *resp){

    if(a % b == 0){
        *resp = 1;
    }

    else{
        *resp = 0;
    }
}

int main(){

    int x, y, i;
    int *vet;
    int *resp;

    printf("Digite x:\n");
    scanf("%d", &x);
    printf("Digite y:\n");
    scanf("%d", &y);

    int tam = y;

    vet = (int *) calloc(tam, sizeof(int));

    for(i = 0; i < tam; i ++){
        printf("Digite os %d numeros\n", tam);
        scanf("%d", &vet[i]);
        eh_multiplo(vet[i], x, &resp);
        printf("resp: %d\n", resp);
    }

    return 0;
}
