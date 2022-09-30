#include <stdio.h>
#include <string.h>

int main(){

    char p1[] = "Teste";
    char p2[] = " de Matematica";

    strcat(p1,p2);    // pode-se utilizar STRNCAT para limitar a quantidade de letras a sair
                     // ex: strncat(p1,p2,7); ---- iria imprimir "Teste de Mat"

    printf("%s", p1);

    // exemplo com entrada

    return 0;
}
