#include <stdio.h>

// utiliza-se ponteiros e passagem por referência
void troca(int *x, int *y){

    int sup;
    sup = *x;
    *x = *y;
    *y = sup;
    printf("Valor de x em troca: %d\n", *x);
    printf("Valor de y em troca: %d\n", *y);

}

int main(){

    int a, b;
    
    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("Digite o valor de b:\n");
    scanf("%d", &b);

    troca(&a,&b);

    printf("Valor trocado de a: %d\n", a);
    printf("Valor trocado de b: %d\n", b);    

    return 0;
}
