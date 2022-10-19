//Crie um programa que leia um número inteiro x e um número inteiro y. Em seguida, o programa deve ler y
//números inteiros em um vetor vet alocado dinamicamente. O programa deve imprimir os y números lidos,
//informando se cada número é, ou não, múltiplo do número x. Deve-se utilizar um procedimento auxiliar com a
//assinatura void eh_multiplo(int a, int b, int ∗resp) que armazene em (∗resp) o valor 1, caso a seja
//múltiplo de b, e 0, caso contrário.
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

    printf("Digite os %d numeros\n", tam);
    
    for(i = 0; i < tam; i ++){
        scanf("%d", &vet[i]);
        eh_multiplo(vet[i], x, &resp);
        printf("resp: %d\n", resp);
    }

    return 0;
}
