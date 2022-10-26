//Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y ). Em seguida,
//declare e leia do teclado um ponto e exiba a distância dele até a origem das coordenadas, isto é, a posição
//(0, 0).
 
#include <stdio.h>
#include <math.h>

struct coordenadas
{
    int x,y;
};

int main()
{
    struct coordenadas ponto1;
    struct coordenadas ponto_origem;
        ponto_origem.x = 0;
        ponto_origem.y = 0;

    float distancia;

    printf("Declare as coordenadas de um ponto (x,y):\n");
    scanf("%d %d", &ponto1.x, &ponto1.y);
    printf("Ponto declarado: (%d,%d)\n", ponto1.x, ponto1.y);
    printf("Ponto origem: (%d,%d)\n", ponto_origem.x, ponto_origem.y);
    
    distancia = sqrt(pow(ponto_origem.x-ponto1.x,2)+pow(ponto_origem.y-ponto1.y,2));

    printf("A distancia entre o ponto digitado e a origem eh de: %f\n", distancia);
    
    return 0;
}     
