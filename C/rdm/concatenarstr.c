#include <stdio.h>
#include <string.h>
//concatenar strings

void concatenar_strings(char palavra1[], char palavra2[], char novapalavra[]){

    int i, j;

    for(i = 0; i < 4; i++){
        novapalavra[i] = palavra1[i];
    }
    for(j = 0; j <9; j++){
        novapalavra[4+j] = palavra2[j];  
    }

}

int main(){

    char palavra1[] = {'p','a','o',' '};
    char palavra2[] = {'m','o','r','t','a','d','e','l','a'};
    char novapalavra[13];
    int i;

    concatenar_strings(palavra1, palavra2, novapalavra);

    for(i = 0; i <13; i++){
        printf("%c", novapalavra[i]);
    }
    printf("\n");
    
    return 0;   
}
