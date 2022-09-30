#include <stdio.h>
#include <stdlib.h>     
#include <time.h>      


void Dado(int valordado){
	valordado = rand() % 6 + 1;
}

void calculo(int valordado){
	int i;
	int contador1 = 0, contador2 = 0, contador3 = 0, contador4 = 0, contador5 = 0, contador6 = 0;
	float media1, media2, media3, media4, media5, media6;
	
	for(i = 0; i < 1000000; i++){
	valordado = rand() % 6 + 1;
	if(valordado == 1){
		contador1++;
	}
	else if(valordado == 2){
		contador2++;
	}
	else if(valordado == 3){
		contador3++;
	}
	else if(valordado == 4){
		contador4++;
	}
	else if(valordado == 5){
		contador5++;
	}
	else if(valordado == 6){
		contador6++;
	}
	}
	media1 = (contador1 / 1000000.0) * 100;
	media2 = (contador2 / 1000000.0) * 100;
	media3 = (contador3 / 1000000.0) * 100;
	media4 = (contador4 / 1000000.0) * 100;
	media5 = (contador5 / 1000000.0) * 100;
	media6 = (contador6 / 1000000.0) * 100;
	printf("Quantidade de vezes que o numero 1 saiu: %d, media = %.2f\n", contador1, media1);
	printf("Quantidade de vezes que o numero 2 saiu: %d, media = %.2f\n", contador2, media2);
	printf("Quantidade de vezes que o numero 3 saiu: %d, media = %.2f\n", contador3, media3);
	printf("Quantidade de vezes que o numero 4 saiu: %d, media = %.2f\n", contador4, media4);
	printf("Quantidade de vezes que o numero 5 saiu: %d, media = %.2f\n", contador5, media5);
	printf("Quantidade de vezes que o numero 6 saiu: %d, media = %.2f\n", contador6, media6);
	}

main (){
	srand (time(NULL));
	int valordado = 0;
	
	Dado(valordado);
	calculo(valordado);	
	return 0;
}
