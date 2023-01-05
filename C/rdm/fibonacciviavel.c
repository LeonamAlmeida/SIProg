#include <stdio.h>
#include <math.h>

float Fib(int n){

   float phi = 1.618; //aproximação

   return (pow(phi,n) / (sqrt(5)));
}

int main(){

    printf("n: ");
    int n;
    scanf("%d", &n);

    float resultado = Fib(n);

    printf("Resultado: %f", resultado);

    return 0;
}