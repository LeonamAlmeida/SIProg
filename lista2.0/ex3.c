#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

int main()
{
    /* initialize random seed: */
    srand (time(NULL));

    int i;
    int vetor[10];


    for(i = 0; i <10; i++){
        vetor[i] = rand() % (21 - 10) + 10;
        printf("[%d] = %d\n", i + 1, vetor[i]);
    }

    return 0;
}
