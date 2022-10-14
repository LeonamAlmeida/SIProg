#include <stdio.h>

int main (){

 int n = 5;

  int *p = NULL;

 p = &n;

*p = *p + 2; //altera o valor de n

printf("%d" , n);

 return 0;
}

CODIGO 02

#include <stdio.h>

int main (){

 int n = 5;
 int w = 10;
  int *p = NULL;
  int *q = NULL;

 p = &n; //5
 q = &w;//10


*p = *q + 2; //altera o valor de n para 12 e *p 12

p = &w; //10
q = &n; //12


printf("%d\n" , *p);
printf("%d" , *q);

 return 0;
}

#include <stdio.h>

void incremento(int *k, int x) {

 *k = *k + 5; //n =12 + 5
 x = x + 2; //x = 11 + 2
}

CODIGO 03

int main (){

 int n = 5;
 int w = 10;
  int *p = NULL;
  int *q = NULL;

 p = &n; //5
 q = &w;//10

*p = *q + 2; //altera o valor de n para 12 e *p 12

p = &w; //10
q = &n; //12

(*p)++;

 incremento(&n , w);

printf("%d\n" , *p);
printf("%d" , *q);

 return 0;
}

 #include <stdio.h>
 #include <stdlib.h>

  int main(){

   int *p, i;
   p = (int *) malloc(20*sizeof(int));

   if (p == NULL)
    printf("memoria insuficiente\n");

   else{
    for(i = 0; i < 20;i++) {
        *(p + i) = i;
    } }
    return 0;
   }
