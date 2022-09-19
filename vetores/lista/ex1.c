#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int vetor[20];
    int contadorpar = 0;
    int contadorimpar = 0;

    for(i = 0; i < 20; i++){
        vetor[i] = i + 1;
        printf("[%d] = %d\n", i, vetor[i]);
        if(vetor[i] %2 == 0){
            contadorpar++;
        }
        else if(vetor[i] %2 !=0){
            contadorimpar++;
        }
    }
    printf("Quantidade de valores par: %d\n", contadorpar);
    printf("Quantidade de valores impar: %d", contadorimpar);

    return 0;
}
