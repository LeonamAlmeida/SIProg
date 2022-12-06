#include <stdio.h>

int max_divisor_comum(int n1, int n2){


    if(n2 != 0){
        return max_divisor_comum(n2, n1%n2);
    } else{
        return n1;
    }
    /*
    int resto;
    do{
        resto = n1 % n2;

        n1 = n2;
        n2 = resto;
    } while(resto != 0);
    return n1;
    */
}

int main(){

    int n1, n2;
    int max_div;

    printf("Digite dois numeros positivos e inteiros:\n");
    scanf("%d %d", &n1, &n2);

    max_div = max_divisor_comum(n1, n2);

    printf("O maximo divisor comum eh %d", max_div);

    return 0;
}