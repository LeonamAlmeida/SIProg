#include <stdio.h>

int somatorio(int n){

    if(n == 0){
        return 0;
    }
    else{
        return n + somatorio(n - 1);
    }
}

int main(){

    int n;
    int soma;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n);

    soma = somatorio(n);
    printf("Soma de 1 até %d = %d", n, soma);

    return 0;
}
