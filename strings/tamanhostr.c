#include <stdio.h>
#include <string.h>

int main(){

    char valor[51];

    printf("Digite algo:\n");
    gets(valor);
    
    int contador = strlen(valor);

    printf("%d\n", contador);

    // ou + longo

        while(valor[contador] != '\0'){
        contador++;
    }

    printf("%d\n", contador);

    return 0;
}
