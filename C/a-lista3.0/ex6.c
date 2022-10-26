//Crie um programa que permita ao usuário cadastrar os dados de uma turma com um número n de discentes
//determinado pelo usuário. Os dados deverão ser armazenados em uma variável do tipo Aluno. Para isso
//você deverá criar um registro chamado Aluno que conterá os seguintes dados: nome, curso, idade, data de
//nascimento (estrutura chamada Data com dia, mês e ano), notas (armazenadas em um vetor de double
//contendo 3 elementos). Depois de realizado o cadastro, os dados dos discentes deverão ser exibidos de maneira
//organizada na tela. Antes de exibir os dados dos discentes cadastrados, calcule o coeficiente dele fazendo uma
//média ponderada das notas de cada uma das provas, sendo o peso delas: 2 para a primeira prova, 3 para a
//segunda prova e 4 para a terceira prova.

#include <stdio.h>
#include <stdlib.h>

    typedef struct Data
    {   
        int dia, mes, ano;
    }data;

    typedef struct Notas
    {
        double nota[3];
    }notas;

    struct Aluno
    {
        char nome[51];
        char curso[51];
        int idade;
        data nascimento;
        notas resultados;
    }aluno;

int main()
{
    int n,i;

    printf("Digite o número de discentes:\n");
    scanf("%d", &n);

    float media[n];
    struct Aluno aluno[n];

    for(i = 0; i < n; i++)
    {
        printf("Digite os dados do aluno %d\n", i + 1);
        printf("Nome:\n");
        setbuf(stdin, NULL);
        gets(aluno[i].nome);

        printf("Curso:\n");
        gets(aluno[i].curso);

        printf("Idade\n");
        scanf("%d", &aluno[i].idade);

        printf("Data de nascimento(xx/xx/xxxx)\n");
        scanf("%d", &aluno[i].nascimento.dia);
        scanf("%d", &aluno[i].nascimento.mes);
        scanf("%d", &aluno[i].nascimento.ano);

        printf("Notas:\n");
        scanf("%lf", &aluno[i].resultados.nota[0]);
        scanf("%lf", &aluno[i].resultados.nota[1]);
        scanf("%lf", &aluno[i].resultados.nota[2]);

        media[i] = (2 * aluno[i].resultados.nota[0] + 3 * aluno[i].resultados.nota[1] + 4 * aluno[i].resultados.nota[2])/9;
    }

    printf("\n");
    printf("***Info dos alunos***\n");
    printf("\n");
    for(i = 0; i < n; i++)
    {   
        printf("*Aluno %d*\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Curso: %s\n", aluno[i].curso);
        printf("Idade: %d\n", aluno[i].idade);
        printf("Data de nascimento\n%d/%d/%d\n", aluno[i].nascimento.dia, aluno[i].nascimento.mes, aluno[i].nascimento.ano);
        printf("Notas:\n P1 = %lf\n P2 = %lf\n P3 = %lf\n", aluno[i].resultados.nota[0], aluno[i].resultados.nota[1], aluno[i].resultados.nota[2]);
        printf("Media total: %.2f", media[i]);
        printf("\n");
        printf("\n");
    }   

    return 0;
}
