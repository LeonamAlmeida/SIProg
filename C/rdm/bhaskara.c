#include <stdio.h>
#include <math.h>
float calculardelta(float a, float b, float c){
    float delta = 0;
    delta = pow(b,2) - 4 *a *c;
    return delta;
}

void raizes(float delta, float a, float b, float c){
    float raiz1 = 0;
    float raiz2 = 0;
    delta = calculardelta(a,b,c);
    raiz1 = (-b+sqrt(delta))/(2*a);
    raiz2 = (-b-sqrt(delta))/(2*a);
    
    printf("Raiz1 = %f\n", raiz1);
    printf("Raiz2 = %f\n", raiz2);
}

int main()
{
    float a, b, c;
    float delta1, delta;
    float raiz1, raiz2;
    
    
    printf("Digite os valores de a, b, c, respectivamente: \n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    
    delta = calculardelta(a,b,c);

    printf("Delta: %f\n", delta);
    
    if ( delta > 0) {
        printf("A equacao tera 2 raizes reais e diferentes\n");
        raizes(delta,a,b,c);
    }
    if ( delta == 0) {
        printf("A equacao tera 2 raizes reais e iguais\n");
        raizes(delta,a,b,c);
    }
    if ( delta < 0) {
        printf("A equacao nao possui raizes reais\n");
    }
    
    return 0;
}
