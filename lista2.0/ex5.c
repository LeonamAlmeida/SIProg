#include <stdio.h>

void recebe_notas(float nota1[], float nota2[]){

    int i;

    for( i = 0; i < 10; i++){
        printf("Digite a nota 1 do aluno %d\n", i + 1);
        scanf("%f", &nota1[i]);
    }
    for( i = 0; i < 10; i++){
        printf("Digite a nota 2 do aluno %d\n", i + 1);
        scanf("%f", &nota2[i]);
    }

}

void calcula_media(float nota1[], float nota2[], float media[]){

    int i;

    for( i = 0; i < 10; i++){
        media[i] = (nota1[i] + nota2[i])/2;
    }

}

void imprimir(float nota1[], float nota2[], float media[]){

    int i;

    for( i = 0; i < 10; i++){
        printf("Aluno %d\n", i + 1);
        printf(" Nota 1: %.2f\n", nota1[i]);
        printf(" Nota 2: %.2f\n", nota2[i]);
        printf(" Media: %.2f\n", media[i]);
    }

}

int main(){

    float nota1[10], nota2[10];
    float media[10];

    recebe_notas(nota1, nota2);
    calcula_media(nota1, nota2, media);
    imprimir(nota1, nota2, media);

    return 0;
    
}
