#include <stdio.h>

int main(){

    // definição de uma estrutura
    struct horario{ // ainda não foi declarada
        int horas;
        int minutos;
        int segundos;
        char letra;  
        double teste;
    };

    // declaração de uma estrutura
    struct horario agora; // estrutura de tipo horario chamada "agora", está declarada 

    // inicialização das váriaveis da estrutura
    agora.horas = 17;   
    agora.minutos = 20; //definir o valor da variavel dentro da estrutura
    agora.segundos = 30;

    // manipulando a estrutura
    struct horario depois; 
    depois.horas = agora.horas + 10;
    depois.minutos = agora.minutos;
    depois.teste = 50.55 / 123;
    depois.letra = 'a';

    printf("%d\n", depois.horas);
    printf("%d\n", depois.minutos);
    printf("%f\n", depois.teste);
    printf("%c\n", depois.letra);

    return 0;
}
