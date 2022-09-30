#include <stdio.h>
#include <string.h>

void strinv(char str[]){

    int inicio, i, n = strlen(str); //strlen retorna o tamanho de uma string
    int j = n - 1;
    for(i = 0; i < n/2; i ++){
        inicio = str[i];
        str[i] = str[j];
        str[j] = inicio;
        j--;
    }  
}

int main(){

    char str[51];
    int inicio;

    printf("Digite a string:\n");
    gets(str);

    strinv(str);

    printf("%s", str);


    return 0;
}
