#include <stdio.h>

int Fib(int n){

    if(n < 2){
        return n;
    } else{
        return Fib(n-2) + Fib(n-1);
    }
}

int main(){

    printf("n:\n");
    int n;
    scanf("%d", &n);

    int resultado = Fib(n);

    printf("Resultado: %d\n", resultado);

    return 0;
}