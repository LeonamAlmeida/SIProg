#include <stdio.h>

int conta_digitos(int n){
    
    static int cont = 0;

    if(n > 0){
        cont++;
        conta_digitos(n/10);
        return cont;
    }
}

int main(){

    int n;
    int contador;

    printf("Digite um numero:\n");
    scanf("%d", &n);

    contador = conta_digitos(n);

    printf("Esse numero possui: %d digitos", contador);

    return 0;
}