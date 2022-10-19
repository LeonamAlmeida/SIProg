#include <stdio.h>

int retorna_indice(int vet[], int indice, int x, int tam)
{
    int resultado;

    if(vet[indice] == x){
        return indice;
    }
    else if(indice >= tam){
        return -1;
    }

    return resultado = retorna_indice(vet, indice + 1, x, tam);    
}

int main()
{
    int i, final;
    int indice = 0;
    int tam;
    int x;
    printf("Tamanho do vetor:\n");
    scanf("%d", &tam);
    int vet[tam];
    printf("NUmero a ser procurado:\n");
    scanf("%d", &x);
    printf("Digite os elementos do vetor:\n");

    for(i = 1; i <= tam; i++){
        scanf("%d", &vet[i]);
    }

    final = retorna_indice(vet, indice, x, tam);

    printf("Indice em que %d apareceu = %d", x, final);

    return 0; 
}
