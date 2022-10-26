//Crie um programa que:

    //Leia um vetor de números inteiros de tamanho n. O valor de n deve ser definido pelo usuário.
    //Crie um procedimento que receba o vetor e retorne por meio de ponteiros os seguintes itens. Atenção para a definição apropriada da assinatura.
        //O maior valor ímpar;
        //O menor valor par;
        //A soma de todos os elementos menores que n;
        //A média de todos os elementos que são MÚLTIPLOS DE 5.
    //Os valores devem ser impressos na função main().

#include <stdio.h>

void retornar(int vet[], int n, int *max, int *min, int *soma, float *media, int *soma2)
{
    int i, sup = 0;
    *soma = 0;
    *soma2 = 0;
    *media;
    *max = -99999999;
    *min = 99999999;
    for(i = 0; i < n; i++)
    {
        printf("Valores do vetor\n");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0)
        {
            if(vet[i] < *min)
            {
                *min = vet[i];
            }
        }
        else if(vet[i] %2 != 0)
        {
            if(vet[i] > *max)
            {
                *max = vet[i];
            }
        }
       if(vet[i] < n)
       {
           *soma += vet[i];
       }
       if(vet[i] % 5 == 0)
       {
           sup++;
           *soma2 += vet[i];
           *media = (float)*soma2/sup;
       }

    }

}

int main()
{
    int n;
    printf("Tamanho do vetor (n):\n");
    scanf("%d", &n);

    int vet[n];


    int max;
    int min;
    int soma;
    int soma2;
    float media;

    retornar(vet, n, &max, &min, &soma, &media, &soma2);


    printf("O maior valor impar eh: %d\n", max);
    printf("O menor valor par eh: %d\n", min);
    printf("Soma dos vetores menores que n: %d\n", soma);
    printf("Media dos valores multiplos de 5: %f", media);

    return 0;
}
