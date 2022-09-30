#include <stdio.h>
#include <string.h>

int main(){

    char nome1[] = "Pedro";
    char nome2[] = "Joao";

    printf("%s\n", nome1);

    strcpy(nome1, nome2);
    //strcpy(string_de_destino, string_de_origem);

    puts(nome1);

    return 0;
}
