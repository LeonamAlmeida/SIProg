// has no field  data % notas
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;

    printf("Digite o número de discentes:\n");
    scanf("%d", &n);

    typedef struct Data
    {   
        int nascimento[3];
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
        data;
        notas;
    }aluno[n];

    struct Aluno teste[n];

    for(i = 1; i <= n; i++)
    {
        printf("Digite os dados do aluno %d", i);
        printf("Nome");
        fflush(stdin);
        gets(aluno[i].nome);

        printf("Curso:\n");
        gets(aluno[i].curso);

        printf("Idade\n");
        scanf("%d", &aluno[i].idade);

        printf("Data de nascimento(dia/mes/ano)\n");
        scanf("%d", &aluno[i].data.nascimento);

        printf("Notas:\n");
        scanf("%lf", &aluno[i].notas.nota);
    }


    return 0;
}
