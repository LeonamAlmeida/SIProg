#include <stdio.h>

// alocacao dinamica
int main()
{
    int tamanho;
    int *p = (int *) malloc(tamanho * sizeof(int)); // tamanho = quantidade de elementos a serem alocados
    if(p == NULL)
    {
        printf("Malloc não funcionou");
    }
    free(p); // libera a memoria / utilizado para evitar uso excessivo da memoria
             // desaloca a memoria mas nao lida com o valor que esta escrito naquela memoria

    int *p = (int *) calloc(tamanho, sizeof(int)); // tamanho = quantidade de elementos a serem alocados
                                                    
    // calloc inicializa o endereço de memoria com 0 (nao havera lixo de memoria)
    // malloc nao lida com a sujeira, apenas lida com a alocacao de memoria

    *p = 10;      // ponteiro p na posicao 0 vale 10
    *(p+1) = 20; // ponteiro p na posicao 1 vale 20 (deve imprimir p+1 tbm ou p[1];
    p[2] = 30; // ponteiro p na posicao 2 vale 30
}
