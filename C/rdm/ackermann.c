#include <stdio.h>

int ackermann(int n, int m){

    if(n == 0){
        return m + 1;
    } else if(m == 0){
        return ackermann(n-1,1);
    } else{
        return ackermann(n-1, ackermann(n,m-1));
    }
}

int main(){

    int n,m;

    printf("n:\n");
    scanf("%d", &n);
    printf("m:\n");
    scanf("%d", &m);

    int resultado = ackermann(n,m);

    printf("Resultado: %d\n", resultado);

    return 0;
}