#include <stdio.h>

  int contaimpar(int n1, int n2){
    int i;
    int contador = 0;

    if( n2 < n1){

      for(i = n2; i <= n1; i++){
        if(i %2 != 0){
          contador++;
        }
      }
    }

    else{
      for(i = n1; i <= n2; i++){
        if(i %2 != 0){
          contador++;
        }
    }
  }

  return contador;
}

int main(){

  int n1, n2;
  int nimpar;

  printf("Digite dois numeros:\n");
  scanf("%d", &n1);
  scanf("%d", &n2);

  nimpar = contaimpar(n1,n2);

  printf("Quantidade de numeros impares: %d", nimpar);

  return 0;
}
