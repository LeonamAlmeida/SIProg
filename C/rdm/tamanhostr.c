#include <stdio.h>
#include <string.h>

int main(){

    char valor[51];

    printf("Digite algo:\n");
    gets(valor);
    
    int contador = strlen(valor);

    printf("%d\n", contador);

    int contador2 = 0;
    // ou + longo

        while(valor[contador2] != '\0'){
        contador2++;
    }

    printf("%d\n", contador2);

    return 0;
}
