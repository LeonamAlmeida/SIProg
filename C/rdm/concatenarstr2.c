#include <stdio.h>
#include <string.h>

int main(){

    char p1[] = "Teste";
    char p2[] = " de Matematica";

    strcat(p1,p2);      // concatea p1 e p2, a resultante é armazenada em p1
                       // pode-se utilizar STRNCAT para limitar a quantidade de letras a sair
                      // ex: strncat(p1,p2,7); ---- iria imprimir "Teste de Mat"

    puts(p1);

    // exemplo com entrada

    char f1[51];
    char f2[51];

    printf("\n");
    printf("Digite a primeira frase:\n");
    gets(f1);

    printf("Digite a segunda frase:\n");
    gets(f2);

    strcat(f1,f2);
    puts(f1);

    return 0;
}
