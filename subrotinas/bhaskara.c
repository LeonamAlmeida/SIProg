#include <stdio.h>
#include <math.h>
float calculardelta(float b, float a, float c){
    float delta = 0;
    delta = pow(b,2) - 4 *a *c;
    return delta;
}

float raizes(float delta, float b, float a, float c){
    float raiz1 = 0;
    float raiz2 = 0;
    float delta2 = 0;
    delta2 = calculardelta(b,a,c);
    raiz1 = (-b+sqrt(delta2))/(2*a);
    raiz2 = (-b-sqrt(delta2))/(2*a);
    
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
    
    delta1 = calculardelta(b,a,c);

    printf("Delta: %f\n", delta1);
    
    if ( delta1 > 0) {
        printf("A equacao tera 2 raizes reais e diferentes\n");
    }
    if ( delta1 == 0) {
        printf("A equacao tera 2 raizes reais e iguais\n");
    }
    if ( delta1 < 0) {
        printf("A equacao nao possui raizes reais\n");
    }
    
    raizes(delta,b,a,c);
    
    return 0;
}
