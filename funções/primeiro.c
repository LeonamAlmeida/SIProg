#include <stdio.h>

float calcular_media(int n, int vetor[]){
    int i = 0;
    float soma;
    float media;
    
    for(i = 0; i < n; i++){
        printf("Digite o valor %d\n", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }
    media = soma / n;
    return media;
}

int imprimir_abaixo_media( int vetor[], int n, float media){
	int i;
	
		printf("Valores abaixo da media: \n");
	
	for( i = 0; i < n; i++){
		if(vetor[i] < media){
			printf("%d\n", vetor[i]);
		}
	}
}

int main()
{
	int n;
    float media; 
    float soma = 0;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
	
	int i;
	int vetor[n];
	
	media = calcular_media(n, vetor);
	
	printf("Media = %f\n", media);
	
	imprimir_abaixo_media(vetor, n, media);

    return 0;
}
